
#include "RenderManager.h"

#include "IRenderItem.h"


namespace JFF { namespace Graphics
{
	sf::RenderWindow* RenderManager::s_mainWindow = nullptr;
	std::vector<IRenderItem const*> RenderManager::s_renderItems = std::vector<IRenderItem const*>();


	void RenderManager::RegisterRenderItem(IRenderItem const* item)
	{
		s_renderItems.push_back(item);
	}

	void RenderManager::UnregisterRenderItem(IRenderItem const* item)
	{
		s_renderItems.erase(std::find_if(s_renderItems.begin(), s_renderItems.end(), [&](auto const* i) { return i == item; }));
	}

	void RenderManager::RenderItems()
	{
		if (s_mainWindow == nullptr)
			return;

		s_mainWindow->clear(sf::Color(100.0f, 100.0f, 100.0f, 255.0f));

		for (auto const& item : s_renderItems)
		{
			item->Render(s_mainWindow);
		}

		s_mainWindow->display();
	}
}}
