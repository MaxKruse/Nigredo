#include <iostream>
#include <Nigredo.h>

class Albedo : public Nigredo::Application
{
public:
	Albedo()
	{
		// TODO: Logging
	}
	
	~Albedo() 
	{
		// TODO: Cleanup
	}

};


Nigredo::Application* Nigredo::CreateApplication()
{
	return new Albedo();
}