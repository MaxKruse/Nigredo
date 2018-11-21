#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
#ifdef NIGREDO_DEBUG

	puts("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!");

	Nigredo::Log::Init();

	NIGREDO_WARN("!!RUNNING IN DEBUG MODE!!");
	NIGREDO_INFO("Initialized");

	Nigredo::Log::GetCoreLogger()->flush();

#elif NIGREDO_RELEASE

	puts("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!");

	Nigredo::Log::Init();

	NIGREDO_WARN("!!RUNNING IN DEBUG MODE!!");
	NIGREDO_INFO("Initialized");

	Nigredo::Log::GetCoreLogger()->flush();

#elif NIGREDO_DIST

#endif

	auto app = Nigredo::CreateApplication();
	app->Run();
	NIGREDO_CRITICAL("WE SHUT DOWN");
	Nigredo::Log::GetCoreLogger()->flush();
	delete app;
}

#else
	#error Windows Only Support

#endif