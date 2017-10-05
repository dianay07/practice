#include "cFactory.h"

int main()
{
	cFactory* factory = new cFactory();
	factory->Create();
	factory->Show();
	
	delete factory;

	return 0;
}