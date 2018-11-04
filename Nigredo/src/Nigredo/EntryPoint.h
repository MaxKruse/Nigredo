#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS

extern Nigredo::Application* Nigredo::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Albedo (Sandbox), Nigredo (Core), Rubedo (Unused)!\n");
	auto app = Nigredo::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Windows Only Support

#endif