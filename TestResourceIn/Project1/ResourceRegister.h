#pragma once
#include <iostream>
using namespace std;

class ResourceRegister
{
private:
	char* name;

public:

	char* RegistResource(char* InputName);
	const char* GetName() { return name; }

	//持失切人 社瑚切
	ResourceRegister();
	~ResourceRegister();
};

