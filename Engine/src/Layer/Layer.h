#pragma once

namespace Engine
{
	class Layer
	{
	public:
		virtual ~Layer() = default;

		virtual void OnInitialize() = 0;
		virtual void OnUpdate(float deltaTime) = 0;
		virtual void OnSceneRender() = 0;
		virtual void OnInterfaceRender() = 0;
	};
}