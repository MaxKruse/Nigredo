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
		Nigredo::WindowCloseEvent e = Nigredo::WindowCloseEvent();
		NIGREDO_TRACE(e);
	}

};


Nigredo::Application* Nigredo::CreateApplication()
{
	return new Albedo();
}