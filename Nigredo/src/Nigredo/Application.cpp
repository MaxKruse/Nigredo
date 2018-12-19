#include "pch.h"
#include "Application.h"

#include "GLFW/glfw3.h"

#define Color(r,g,b) glClearColor(r/255.0, g/255.0, b/255.0, 1)

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
			Color(128, 60, 10);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

}