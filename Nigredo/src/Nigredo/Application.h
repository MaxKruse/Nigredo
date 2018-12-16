#pragma once
#include "pch.h"
#include "Core.h"
#include "Log.h"
#include "Events/Event.h"
#include "Window.h"

namespace Nigredo {

	class NIGREDO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool running = true;
	};

	// To be defined in Client
	Application* CreateApplication();

}