#include "Application.h"

namespace Nigredo {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (true)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			NIGREDO_TRACE("Next second...");
		}
	}

}