#pragma once
#include "Core.h"
#include <iostream>

namespace Nigredo {

	class NIGREDO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}