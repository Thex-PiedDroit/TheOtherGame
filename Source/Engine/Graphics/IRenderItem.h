
#pragma once

#include "RenderManager.h"
#include <SFML/Graphics.hpp>


namespace JFF { namespace Graphics
{
	/*interface*/ class IRenderItem
	{
	public:

		IRenderItem()
		{
			RenderManager::RegisterRenderItem(this);
		}

		~IRenderItem()
		{
			RenderManager::UnregisterRenderItem(this);
		}

		virtual void Render(sf::RenderWindow* window) const = 0;
	};
}}
