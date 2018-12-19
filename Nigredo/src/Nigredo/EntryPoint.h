#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
	NIGREDO_CRITICAL_CORE("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!");

	Nigredo::Log::Init();

	NIGREDO_WARN_CORE("!!RUNNING IN DEBUG MODE!!");
	NIGREDO_INFO_CORE("Initialized");


	auto app = Nigredo::CreateApplication();
	app->Run();
	NIGREDO_CRITICAL_CORE("WE SHUT DOWN");
	delete app;
}

#else
	#error Windows Only Support

#endif