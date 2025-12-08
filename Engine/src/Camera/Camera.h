#pragma once

#include "raylib.h"

namespace Engine
{
	class Camera
	{
	public:
		Camera3D GetCamera() const { return m_Camera; }

	private:
		Camera3D m_Camera;
	};
}