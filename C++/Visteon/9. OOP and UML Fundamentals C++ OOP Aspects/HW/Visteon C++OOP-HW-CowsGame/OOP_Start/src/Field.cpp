#include <Field.hpp>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdexcept>
#include <cassert>

#include "Coord2D.hpp"

Field::Field(const std::string& title, int width, int height,
		const SDL_Color& color) :
		backgroundColor(color) {
	// Init graphics library
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		throw std::runtime_error("SDL_Init(SDL_INIT_VIDEO) failed!");
	}

	// Field window
	window = SDL_CreateWindow(name.c_str(),				// Title
			SDL_WINDOWPOS_CENTERED,		// x position of the window
			SDL_WINDOWPOS_CENTERED,		// y position of the window
			width,						// window width
			height,						// window height
			SDL_WINDOW_SHOWN);			// window flags

	if (0 == window) {
		throw std::runtime_error("SDL_CreateWindow() failed!");
	}

	// Field graphics context
	renderer = SDL_CreateRenderer(window,	// The window we want to draw into
			-1,						// Index of rendering driver, -1 = "select first supported"
			SDL_RENDERER_SOFTWARE);		// Renderer flags

	if (0 == renderer) {
		throw std::runtime_error("SDL_CreateRenderer() failed!");
	}

	setTitle(title);
	clear();
}

Field::~Field() {
	// Destroy objects
	for (auto cell : cells) {
		delete cell;
	}

	// Destroy graphics context, etc.
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	// Shutdown graphics library
	SDL_Quit();	// FIXME: what happens if 2 canvas object exist, and one is deleted?
}

void Field::setTitle(const std::string& name) {
	this->name = name;
	SDL_SetWindowTitle(window, name.c_str());
}

void Field::clear(void) {
	SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g,
			backgroundColor.b, backgroundColor.a);
	SDL_RenderClear(renderer);
}

void Field::update() {
	clear();

	// Draw all objects to Renderer (but not shown on the window yet)
	for (auto cell : cells) {
		cell->draw(renderer);
	}

	// Send rendered contents to the window (shows graphics on the screen)
	SDL_RenderPresent(renderer);
}

void Field::add(Cell* cell) {
	if (cell == nullptr) {
		throw std::logic_error("Trying to add null Cell!");
	}
	cells.push_back(cell);
}

void Field::remove(Cell* cell) {
	cells.remove(cell);
}

Cell* Field::getShapeAt(const Coord2D& coord) {
	Cell* result = nullptr;

	for (auto cell : cells) {
		assert(cell != nullptr);	// This should never happen, see add() check
		if (cell->containsCoordinates(coord)) {
			result = cell;
			// Searching for topmost, which is last, no return here
		}
	}

	return result;
}

