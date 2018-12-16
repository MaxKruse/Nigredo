#include "pch.h"
#include "Application.h"

#include "GLFW/glfw3.h"

namespace Nigredo {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (running)
		{
			glClearColor(1, 0.7, 0, 0.5);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

}