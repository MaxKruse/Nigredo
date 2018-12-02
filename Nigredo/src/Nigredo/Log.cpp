#include "Log.h"

namespace Nigredo {


	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%H:%M:%S:%e] %n: %v%$");
				
		if (CreateDirectory(L"../logs/", NULL) ||
			ERROR_ALREADY_EXISTS == GetLastError())
		{
			
		}
		else
		{
			throw "Couldnt create folder \"../logs/\"";
		}

		time_t rawtime;
		struct tm * timeinfo;
		char buffer[512];

		time(&rawtime);
		timeinfo = localtime(&rawtime);

		strftime(buffer, sizeof(buffer), "..\\logs\\log_%Y_%m_%d - %H-%M-%S.txt", timeinfo);

		const spdlog::filename_t &str(buffer);

		s_CoreLogger = spdlog::rotating_logger_mt("CORE", str, 1024*1024*256, 4);
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("CLIENT");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}