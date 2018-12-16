#pragma once

#include "pch.h"

#include "Nigredo/Core.h"
#include "Nigredo/Events/Event.h"
#include "Log.h"

namespace Nigredo {

	struct WindowProperties
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProperties(const std::string& title = "Nigredo Engine", unsigned int width = 1280, unsigned int height = 720)
			: Title(title), Width(width), Height(height)
		{
		}

	};

	
	class NIGREDO_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		// Window Attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProperties& props = WindowProperties());

	};

}