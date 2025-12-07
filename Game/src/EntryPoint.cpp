#include "Application/Application.h"
#include "GameLayer.h"

int main()
{
	Game::GameConfig l_Config = Game::GameLayer::GetGameConfig();
	Game::GameLayer l_GameLayer{};

	Engine::Application l_Application{l_Config.Width, l_Config.Height, l_Config.Title, &l_GameLayer};

	l_Application.Run();

	return 0;
}