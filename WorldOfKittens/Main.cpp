#include <iostream>

#include "Kitten.h"
#include "CyborgKitten.h"


int main()
{
	Kitten simpleKitten;
	simpleKitten.SetAge(42);
	simpleKitten.SetColour(KittenColour::Black);
	simpleKitten.SetName("Zoro Batmanov");
	simpleKitten.SetType(KittenType::ExplodingKittenType);

	simpleKitten.Print();

		//simpleKitten.GrowOlder();

		//Kitten newSimpleKitten = simpleKitten;

		//newSimpleKitten.Print();

	CyborgKitten cyborgKitten;
	cyborgKitten.SetAge(27);
	cyborgKitten.SetColour(KittenColour::Gray);
	cyborgKitten.SetName("Nikola");
	cyborgKitten.SetType(KittenType::CyborgKittenType);

	CyborgKitten* clonedCyborg = cyborgKitten.Replicate();
	
	clonedCyborg->Print();

	delete clonedCyborg;


	return 0;
}


void Foo()
{
	std::cout << "Bananaaaa..." << '\n';
}