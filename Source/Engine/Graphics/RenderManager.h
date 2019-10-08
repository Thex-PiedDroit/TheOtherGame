
#pragma once

#include <SFML/Graphics.hpp>
#include <vector>


namespace JFF { namespace Graphics
{
	class IRenderItem;


	/*static*/ class RenderManager
	{
	private:

		static sf::RenderWindow* s_mainWindow;
		static std::vector<IRenderItem const*> s_renderItems;


	public:

		static inline void SetMainWindow(sf::RenderWindow* window) { s_mainWindow = window; }

		static void RegisterRenderItem(IRenderItem const* item);
		static void UnregisterRenderItem(IRenderItem const* item);

		static void RenderItems();
	};
}}
