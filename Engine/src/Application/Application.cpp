#include "Application/Application.h"

namespace Engine
{
	Application::Application(int width, int height, const std::string& title, Layer* layer) : m_Width(width), m_Height(height), m_Title(title), m_Layer(layer)
	{
		SetConfigFlags(FLAG_WINDOW_RESIZABLE);

		InitWindow(m_Width, m_Height, m_Title.c_str());
		SetTargetFPS(60);

		if (m_Layer)
		{
			m_Layer->OnInitialize();
		}
	}

	Application::~Application()
	{
		CloseWindow();
	}

	void Application::Run()
	{
		while (!WindowShouldClose())
		{
			float l_DeltaTime = GetFrameTime();

			if (m_Layer)
			{
				m_Layer->OnUpdate(l_DeltaTime);
			}

			BeginDrawing();
			ClearBackground(BLACK);
			BeginMode3D(m_Camera.GetCamera());

			if (m_Layer)
			{
				m_Layer->OnSceneRender();
			}

			EndMode3D();

			if (m_Layer)
			{
				m_Layer->OnInterfaceRender();
			}

			EndDrawing();
		}
	}
}