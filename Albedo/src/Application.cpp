#include <iostream>

namespace Nigredo
{
	__declspec(dllimport) void Print(const char* text);
}

void main()
{
	Nigredo::Print("Welcome to Albedo, Nigredo, Rubedo!");
	std::cin.get();
}