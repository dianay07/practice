#include "ResourceRegister.h"
void main()
{
	ResourceRegister *p = new ResourceRegister();

	char* monster = "Digimon";

	p->RegistResource(monster);

	cout << p->GetName() << endl;
	
	delete p;
}