#include "ResourceRegister.h"
ResourceRegister::ResourceRegister()
{
}
ResourceRegister::~ResourceRegister()
{
}

char* ResourceRegister::RegistResource(char* InputName)
{
	name = InputName;

	return name;
}
