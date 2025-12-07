#pragma once

#include "Layer/Layer.h"

#include <string>

namespace Game
{
	struct GameConfig
	{
		int Width;
		int Height;
		const char* Title;
	};

	class GameLayer : public Engine::Layer
	{
	public:
		GameLayer() = default;
		~GameLayer() override = default;

		void OnInitialize() override;
		void OnUpdate(float deltaTime) override;
		void OnRender() override;

		static GameConfig GetGameConfig();
	};
}