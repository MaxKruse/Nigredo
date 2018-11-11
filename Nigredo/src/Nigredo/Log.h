#pragma once

#include <memory.h>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "Core.h"

namespace Nigredo {

	class NIGREDO_API Log
	{

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Logging Macros
#define NIGREDO_CORE_TRACE(...)    ::Nigredo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NIGREDO_CORE_INFO(...)     ::Nigredo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NIGREDO_CORE_WARN(...)     ::Nigredo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NIGREDO_CORE_ERROR(...)    ::Nigredo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NIGREDO_CORE_CRITICAL(...) ::Nigredo::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client Logging Macros
#define NIGREDO_TRACE(...)         ::Nigredo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NIGREDO_INFO(...)          ::Nigredo::Log::GetClientLogger()->info(__VA_ARGS__)
#define NIGREDO_WARN(...)          ::Nigredo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NIGREDO_ERROR(...)         ::Nigredo::Log::GetClientLogger()->error(__VA_ARGS__)
#define NIGREDO_CRITICAL(...)      ::Nigredo::Log::GetClientLogger()->critical(__VA_ARGS__)