#include "pch.h"
#include "Application.h"

// Events
#include "Nigredo/Events/ApplicationEvent.h"
#include "Nigredo/Events/KeyEvent.h"
#include "Nigredo/Events/MouseEvent.h"

namespace Nigredo {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		NIGREDO_TRACE(e);
		while (true);
	}

}