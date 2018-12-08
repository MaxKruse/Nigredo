#include <iostream>
#include <Nigredo.h>

class Albedo : public Nigredo::Application
{
public:
	Albedo()
	{
	}
	
	~Albedo() 
	{
	}

};


Nigredo::Application* Nigredo::CreateApplication()
{
	return new Albedo();
}