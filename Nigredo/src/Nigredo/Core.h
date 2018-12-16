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

#ifdef NIGREDO_ENABLE_ASSERTS
	#define NIGREDO_ASSERT(x, ...) { if(!(x)) { NIGREDO_ERROR("Assertion failed: {}", __VA_ARGS__ ); __debugbreak(); } }
#else
	#define NIGREDO_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)