#include "pch.h"
#include "Log.h"

namespace Nigredo {


	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%H:%M:%S:%e] %n: %v%$");
				
		char buffer[512];
		struct tm newtime;
		time_t now = time(0);
		localtime_s(&newtime, &now);

		s_CoreLogger = spdlog::stdout_color_mt("CORE");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("CLIENT");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}