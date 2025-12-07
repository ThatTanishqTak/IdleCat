#include "GameLayer.h"

#include "raylib.h"

namespace Game
{
	void GameLayer::OnInitialize()
	{
		// Initialize game state here
	}

	void GameLayer::OnUpdate(float deltaTime)
	{
		// Update game logic here
	}

	void GameLayer::OnRender()
	{
		// Draw game here
	}

	GameConfig GameLayer::GetGameConfig()
	{
		GameConfig l_Config{};
		l_Config.Width = 1920;
		l_Config.Height = 1080;
		l_Config.Title = "IdleCat";

		return l_Config;
	}
}