#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!\n");

	Nigredo::Log::Init();

	NIGREDO_CORE_INFO("Initialized");
	NIGREDO_INFO("Initialized");

	auto app = Nigredo::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Windows Only Support

#endif