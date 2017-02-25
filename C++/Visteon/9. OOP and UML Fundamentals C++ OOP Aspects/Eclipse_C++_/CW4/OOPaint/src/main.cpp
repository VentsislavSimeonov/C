#include "OOPaintApp.hpp"
#include "Canvas.hpp"

const char* DEFAULT_WINDOW_TITLE = "Object-Oriented Paint - EA";
const int DEFAULT_WINDOW_WIDTH = 640;
const int DEFAULT_WINDOW_HEIGHT = 480;
const SDL_Color DEFAULT_WINDOW_COLOR = {0x30, 0x30, 0x30, 0xff};

int main() {
	// Create subsystems & wire them together
	Canvas* canvas = new Canvas(
			DEFAULT_WINDOW_TITLE, 
			DEFAULT_WINDOW_WIDTH, 
			DEFAULT_WINDOW_HEIGHT, 
			DEFAULT_WINDOW_COLOR);
	OOPaintApp application(canvas);		// Dependency Injection (almost; Canvas is not Abstract...)
	
	application.run();
}
