#include "pch.h"
#include "Application.h"

#include "GLFW/glfw3.h"

#define Color(r,g,b) glClearColor(r/255.0, g/255.0, b/255.0, 1)

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

namespace Nigredo {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application()
	{
		
	}

	bool Application::OnWindowClosed(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;
	}
	
	void Application::OnEvent(Event& e)
	{
		EventDispatcher dispatcher(e);

		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClosed));

		NIGREDO_TRACE_CORE("{}", e);
	}

	void Application::Run()
	{
		while (m_Running)
		{
			Color(128, 60, 10);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

}