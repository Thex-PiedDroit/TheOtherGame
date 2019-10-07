
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "It's a window");

	sf::RectangleShape shape(sf::Vector2f(50.0f, 50.0f));
	shape.setFillColor(sf::Color::Green);

	shape.setOrigin(sf::Vector2f(25.0f, 25.0f));
	shape.setPosition(sf::Vector2f(100.0f, 100.0f));


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
