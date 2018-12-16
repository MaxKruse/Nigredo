workspace "Nigredo"
	architecture "x64"
	startproject "Albedo"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "Nigredo/vendor/GLFW/include"

include "Nigredo/vendor/GLFW"

project "Nigredo"
	location "Nigredo"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputDir .. "/%{prj.name}")
	objdir ("bin/Intemediates/" .. outputDir .. "/%{prj.name}")

	pchheader "pch.h"
	pchsource "Nigredo/src/pch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links
	{
		"GLFW",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"NIGREDO_PLATFORM_WINDOWS",
			"NIGREDO_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputDir .. "/Albedo")
		}

	filter "configurations:Debug"
		defines "NIGREDO_DEBUG"
		defines "NIGREDO_ENABLE_ASSERTS"
		symbols "On"

	filter "configurations:Release"
		defines "NIGREDO_RELEASE"
		defines "NIGREDO_ENABLE_ASSERTS"
		optimize "On"

	filter "configurations:Dist"
		defines "NIGREDO_DIST"
		optimize "Full"
		

project "Albedo"
	location "Albedo"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputDir .. "/%{prj.name}")
	objdir ("bin/Intemediates/" .. outputDir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Nigredo/vendor/spdlog/include",
		"Nigredo/src"
	}

	links 
	{
		"Nigredo"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"NIGREDO_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "NIGREDO_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "NIGREDO_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "NIGREDO_DIST"
		optimize "On"