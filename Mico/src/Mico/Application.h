#pragma once

#include "Core.h"

namespace Mico {

	class MICO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in app
	Application* CreateApplication();
}


