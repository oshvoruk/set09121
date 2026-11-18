// Football Combat main.cpp initial game sketch 

// 1. HEADERS
// ----------------
// sfml/graphics.hpp is included for graphics rendering with SFML.
// iostream is included for standard input and output operations.
#include <SFML/Graphics.hpp>
#include <iostream>
// (GDD Media list: music, SFX) #include <SFML/Audio.hpp> and link sfml-audio library.
// (GDD Technical spec: Box2d) #include <Box2D/Box2D.h> and link Box2D library.

// 2. CONSTANTS
// ----------------
// Define the constant values outlined in our GDD (Game Design Document) here:
// "180p/60fps"
const int game_width = 1920;
const int game_height = 1080; // 180p scaled to 1080p for 60fps
const float time_step = 1.0f / 60.0f; // 60fps

sf::Font font;
sf::Text text; // "Football Combat"
sf::Text text2; // "Press Enter to play"

// Below is the outline taught in https://edinburgh-napier.github.io/set09121/pong.html

void init(){
    // Load font-face from res dir
    if (!font.loadFromFile("res/fonts/Roboto-Regular.ttf")) {
        std::cerr << "Failed to load font!" << std::endl;
    }
    // Set text element to use font
    text.setFont(font);
    // set the character size to 24 pixels
    text.setCharacterSize(24);
    text2.setFont(font);
    text2.setCharacterSize(24);
    text.setString("Football Combat");
    text2.setString("Press Enter to play");
    // Position the text elements on the screen
    text.setPosition(game_width / 2 - text.getLocalBounds().width / 2, game_height / 2 - text.getLocalBounds().height / 2);
    text2.setPosition(game_width / 2 - text2.getLocalBounds().width / 2, game_height / 2 + text.getLocalBounds().height);
}

void update(float dt) {
	// Update Everything
}

void render(sf::RenderWindow &window) {
	// Draw Everything
	window.draw(text);
	window.draw(text2);
}

void clean(){
	//free up the memory if necessary.
}

int main () {
	//create the window
	sf::RenderWindow window(sf::VideoMode({game_width, game_height}), "Football Combat");
    //initialise and load
	init();
    sf::Clock clock; // starts a timer
	while(window.isOpen()){  
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		update(time_step);
		render(window);
		window.display();
	}
	//Unload and shutdown
	clean();
}


