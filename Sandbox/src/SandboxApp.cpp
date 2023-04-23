#include <Mico.h>

class Sandbox : public Mico::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Mico::Application* Mico::CreateApplication()
{
	return new Sandbox();
}

