#include <iostream>
#include <string>
#include "ClassPerson.h"

int main()
{
	MalePerson male("olayinka", "soyinka", "47");

	cout << male.fullname() << endl;

	FemalePerson female("20");

	female.set_name("irebowale", "soyinka");

	cout << female.fullname() << endl;

	RandomPerson rando;

	cout << rando.fullname() << endl;
}