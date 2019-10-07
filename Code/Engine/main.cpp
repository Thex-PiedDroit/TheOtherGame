
#include "Engine/Graphics/RenderManager.h"
#include "Engine/Graphics/Shapes/Rectangle.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "It's a window");
	JFF::Graphics::RenderManager::SetMainWindow(&window);

	sf::Texture cow;
	cow.loadFromFile("Data/Cow.png");

	JFF::Graphics::Rectangle shape(sf::Vector2f(100.0f, 100.0f));
	shape.SetTexture(&cow, true);


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

		window.clear(sf::Color::White);
		JFF::Graphics::RenderManager::RenderItems();
		window.display();
	}

	return 0;
}
