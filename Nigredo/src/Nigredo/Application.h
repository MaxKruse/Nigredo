#pragma once
#include "pch.h"
#include "Core.h"
#include "Log.h"

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