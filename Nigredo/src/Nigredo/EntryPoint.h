#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
#ifdef NIGREDO_DEBUG

	puts("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!\n");

	Nigredo::Log::Init();

	NIGREDO_CORE_WARN("RUNNING IN DEBUG MODE");

	NIGREDO_CORE_INFO("Initialized");
	NIGREDO_INFO("Initialized");

#elif NIGREDO_RELEASE

	puts("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!\n");

	Nigredo::Log::Init();

	NIGREDO_CORE_INFO("RUNNING IN RELEASE MODE");

	NIGREDO_CORE_INFO("Initialized");
	NIGREDO_INFO("Initialized");

#elif NIGREDO_DIST

#endif

	auto app = Nigredo::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Windows Only Support

#endif