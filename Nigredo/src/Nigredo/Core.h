#pragma once

#ifdef NIGREDO_PLATFORM_WINDOWS
	#ifdef NIGREDO_BUILD_DLL
		#define NIGREDO_API __declspec(dllexport)
	#else
		#define NIGREDO_API __declspec(dllimport)
	#endif

#else
#error Windows Only Support

#endif