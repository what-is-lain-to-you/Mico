#pragma once

#ifdef MC_PLATFORM_WINDOWS

extern Mico::Application* Mico::CreateApplication();

int main(int agrc, char** argv)
{
	printf("---Mico---\n");
	auto app = Mico::CreateApplication();
	app->Run();
	delete app;
}



#else
	#error Mico only support Windows!
#endif