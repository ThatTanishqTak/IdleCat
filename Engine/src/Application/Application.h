#pragma once

#include "raylib.h"

#include "Layer/Layer.h"

#include <string>

namespace Engine
{
	class Application
	{
	public:
		Application(int width, int height, const std::string& title, Layer* layer);
		~Application();

		void Run();

	private:
		int m_Width;
		int m_Height;
		std::string m_Title;

		Layer* m_Layer;
	};
}