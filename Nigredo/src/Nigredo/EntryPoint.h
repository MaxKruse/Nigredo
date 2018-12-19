#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
	Nigredo::Log::Init();

	NIGREDO_WARN_CORE("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!");
	NIGREDO_WARN_CORE("!!RUNNING IN DEBUG MODE!!");
	NIGREDO_INFO_CORE("Initialized");


	auto app = Nigredo::CreateApplication();
	app->Run();
	NIGREDO_WARN_CORE("WE SHUT DOWN");
	delete app;
}

#else
	#error Windows Only Support

#endif