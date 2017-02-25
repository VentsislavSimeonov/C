#include "FactoryInterface.hpp"
#include "Grass.hpp"
#include "OOP_Game.hpp"
#include "RegistryFactory.hpp"
#include <time.h>
#include <stdlib.h>

OOP_Game::OOP_Game(Field* field, FactoryInterface* factory) :
		field(field), factory(factory) {
}

OOP_Game::~OOP_Game() {
	delete field;
}

void OOP_Game::run() {
//	std::cout<<"pre-delay\n";
//	SDL_Delay(2000);	//SDL Delay
//	std::cout<<"after-delay\n";
	// Event loop
	Cell* currentCell = nullptr;

//	Create Field of Cells with random quantity in the cells
	// Will implement a method to monitor the locality of other Cells
	srand(time(NULL));
	int _x = 0, _y = 0, random = 0;
	for (int i = 0; i < 500; i++) {
		for (int j = 0; j < 800; j++) {
			if ((i % 100 == 0) && (j % 100 == 0)) {
				random = rand() % 256 + 20;
				_x = j;
				_y = i;
				currentCell = new Grass(random, Coord2D(_x, _y),
						Coord2D(100, 100));
				currentCell->setColor( { 0xff, 0xff, 0xff, 0xff });
				field->add(currentCell);
				field->update();
			}

		}
	}

	while (true) {
		SDL_Event event;

		if (SDL_WaitEvent(&event)) {
			/*
			 * Look for input events and take corresponding actions
			 * 
			 * FIXME: this is a BAD, nasty switch-case which will be beaten 
			 * by OOP design patterns
			 */
			switch (event.type) {
			case SDL_QUIT:
				return;

//will use for creating the fields
			case SDL_MOUSEBUTTONDOWN:
				switch (event.button.button) {
				case SDL_BUTTON_LEFT:
					if (0 != currentCell) {
						// We have a new shape, add it to Canvas
						field->add(currentCell);
						currentCell = 0;
					} else {
						// We are in "Move" mode - pick a shape, if any
						currentCell = field->getShapeAt(
								Coord2D(event.button.x, event.button.y));
					}
					break;
///////////////////////////

				case SDL_BUTTON_RIGHT:
					if (0 == currentCell) { // Delete works only when not moving an object
						Cell* cellToRemove = field->getShapeAt(
								Coord2D(event.button.x, event.button.y));
						if (nullptr != cellToRemove) {
							field->remove(cellToRemove);
							delete cellToRemove;
						}
					}
					break;
				}
				break;

			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {

//going to be used for Cow Factory
//				case 'c':
//					if (nullptr == currentCell) {
//						int x, y;
//
////						currentCell = factory->createCell("circle",
////								Coord2D(x, y));
//						currentCell = new Circle(Coord2D(x, y), 50); // FIXME: hardcoded
//						currentCell->setColor( { 0xff, 0xff, 0xff, 0xff }); // FIXME: hardcoded
////moveBy >> pre to MoveBehaviour
//						currentCell->moveBy(Coord2D(x, y));
////						currentShape->setMoveBehaviour(new SmoothMoveBehaviour());
//						field->add(currentCell);
//					}
//					break;

				case 'r':
					if (nullptr == currentCell) {
						int x = 0, y = 0, random = 1000;

						currentCell = new Grass(random, Coord2D(x, y),
								Coord2D(50, 50)); // FIXME: hardcoded
						currentCell->setColor( { 0xff, 0xff, 0xff, 0xff }); // FIXME: hardcoded, duplicated
						field->add(currentCell);

//						currentCell = factory->createCell("grass",
//								Coord2D(x, y));
//						currentCell->moveBy(Coord2D(x, y));
//						currentShape->setMoveBehaviour( new SmoothMoveBehaviour());
					}
					break;

//snap to grid listener
//				case 's':
//					if (nullptr == currentShape) {
//						canvas->moveBy();
//
////						what to do with the shape >> will have to make it snap to grid
////						smooth = curr + delta
////						snapped = x/total grid *grid selection
////						remainder = smooth - snapped
////
//					}
//					break;

				case SDLK_ESCAPE:	// ESC
					if (0 != currentCell) {
						field->remove(currentCell);
						delete currentCell;
						currentCell = 0;
					}
					break;

				default:
					;
				}
				break;

//movement of the object
//			case SDL_MOUSEMOTION:
//				if (nullptr != currentCell) {
//					// SDL_Keymod keymods = SDL_GetModState(); // If we need modifier keys info
//					currentCell->moveBy(
//							Coord2D(event.motion.xrel, event.motion.yrel));
//				}
//				break;

//scale object
//			case SDL_MOUSEWHEEL:
//				if (nullptr != currentCell) {
//					double factor = 1;
//					if (event.wheel.y > 0) {
//						factor = 1.1;
//					}
//
//					if (event.wheel.y < 0) {
//						factor = 0.9;
//					}
//
//					currentCell->resize(factor);
//				}
//				break;
			}

			// Show the result
			field->update();
		}
	}
}
