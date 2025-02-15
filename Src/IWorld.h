#pragma once

namespace Catherine
{
	class WorldContext;
	class CameraManager;
	class LightManager;

	class IWorld
	{
	public:
		virtual bool Initialize() = 0;
		virtual void Uninitialize() = 0;

		virtual void PreUpdate(float deltaTime) = 0;
		virtual void Update(float deltaTime) = 0;
		virtual void PostUpdate(float deltaTime) = 0;

		virtual void PreRender() = 0;
		virtual void Render() = 0;
		virtual void PostRender() = 0;

		virtual const WorldContext * GetWorldContext() const = 0;
		virtual CameraManager * GetCameraManager() const = 0;
		virtual LightManager * GetLightManager() const = 0;
	};
}