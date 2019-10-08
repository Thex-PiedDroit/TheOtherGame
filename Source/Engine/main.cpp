
#include "assert.hpp"
#include "Gameplay/gameMain.h"
#include "Graphics/RenderManager.h"

#include <SFML/Graphics.hpp>


void GameLoop(sf::RenderWindow& window)
{
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

		JFF::Update();
		JFF::Graphics::RenderManager::RenderItems();
	}
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "It's a window");
	JFF::Graphics::RenderManager::SetMainWindow(&window);

	JFF::Initialize();

	GameLoop(window);

	return 0;
}
