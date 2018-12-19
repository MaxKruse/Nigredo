#pragma once
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include "spdlog/fmt/ostr.h"
#include "Core.h"

namespace Nigredo {

	class Log
	{

	public:
		NIGREDO_API static void Init();

		NIGREDO_API inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		NIGREDO_API inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Client Logging Macros
#define NIGREDO_TRACE(...)			::Nigredo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NIGREDO_INFO(...)			::Nigredo::Log::GetClientLogger()->info(__VA_ARGS__)
#define NIGREDO_WARN(...)			::Nigredo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NIGREDO_ERROR(...)			::Nigredo::Log::GetClientLogger()->error(__VA_ARGS__)
#define NIGREDO_CRITICAL(...)		::Nigredo::Log::GetClientLogger()->critical(__VA_ARGS__)

// Core Logging Macros
#define NIGREDO_TRACE_CORE(...)		::Nigredo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NIGREDO_INFO_CORE(...)		::Nigredo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NIGREDO_WARN_CORE(...)		::Nigredo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NIGREDO_ERROR_CORE(...)		::Nigredo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NIGREDO_CRITICAL_CORE(...)	::Nigredo::Log::GetCoreLogger()->critical(__VA_ARGS__)