
#include "Engine/Graphics/RenderManager.h"
#include "Engine/Graphics/Shapes/Rectangle.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "It's a window");
	JFF::Graphics::RenderManager::SetMainWindow(&window);

	JFF::Graphics::Rectangle shape(sf::Vector2f(50.0f, 50.0f));
	shape.SetFillColor(sf::Color::Green);

	shape.SetOrigin(sf::Vector2f(25.0f, 25.0f));
	shape.SetPosition(sf::Vector2f(100.0f, 100.0f));


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

		window.clear();
		JFF::Graphics::RenderManager::RenderItems();
		window.display();
	}

	return 0;
}
