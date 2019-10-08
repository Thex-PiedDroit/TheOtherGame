
#include "Graphics/RenderManager.h"
#include "Graphics/Shapes/Shapes.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "It's a window");
	JFF::Graphics::RenderManager::SetMainWindow(&window);

	JFF::Graphics::Rectangle shape(sf::Vector2f(100.0f, 100.0f));
	shape.LoadTexture("Cow.png");

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		window.clear(sf::Color(100.0f, 100.0f, 100.0f, 255.0f));
		JFF::Graphics::RenderManager::RenderItems();
		window.display();
	}

	return 0;
}
