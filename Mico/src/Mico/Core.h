#pragma once

#ifdef MC_PLATFORM_WINDOWS
	#ifdef MC_BUILD_DLL
		#define MICO_API __declspec(dllexport)
	#else
		#define MICO_API __declspec(dllimport)
	#endif
#else
	#error Mico only support Windows!
#endif