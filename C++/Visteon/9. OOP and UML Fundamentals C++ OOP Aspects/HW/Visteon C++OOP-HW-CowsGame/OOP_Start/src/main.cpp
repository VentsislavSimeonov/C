#include <FactoryInterface.hpp>
#include <Field.hpp>
#include <OOP_Game.hpp>
#include <RegistryFactory.hpp>

const char* DEFAULT_WINDOW_TITLE = "Object-Oriented Game - EA";
const int DEFAULT_WINDOW_WIDTH = 960;
const int DEFAULT_WINDOW_HEIGHT = 600;
const SDL_Color DEFAULT_WINDOW_COLOR = {0x30, 0x30, 0x30, 0xff};

int main() {
	// Create subsystems & wire them together
	FactoryInterface* factory  = new RegistryFactory();
	Field* field = new Field(
			DEFAULT_WINDOW_TITLE, 
			DEFAULT_WINDOW_WIDTH, 
			DEFAULT_WINDOW_HEIGHT, 
			DEFAULT_WINDOW_COLOR);
	OOP_Game application(field, factory);		// Dependency Injection (almost; Canvas is not Abstract...)
	
	application.run();
}
