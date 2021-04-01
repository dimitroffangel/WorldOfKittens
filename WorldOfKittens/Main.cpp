#include <iostream>

#include "Kitten.h"
#include "CyborgKitten.h"
#include "ExplodingKitten.h"
#include "Colony.h"

#include "KittenCareTaker.h"

int main()
{
	const int SizeOfListOfKittens = 2;
	Kitten listOfKittens[SizeOfListOfKittens];

	Kitten* dynamicListOFKittens = new Kitten[SizeOfListOfKittens];

	Kitten* pointerKitten;

	KittenCareTaker newKittenTaker;
	
	KittenCareTaker coolerKittenCareTaker = newKittenTaker;

	KittenCareTaker thirdKittenCareTaker;

	thirdKittenCareTaker = thirdKittenCareTaker;

	return 0;

	Position fooPosition{ 5, 6 };
	fooPosition.x = 5;
	fooPosition.y = 6;

	std::cout << fooPosition.x << " " << fooPosition.y << " " << fooPosition.GetLengthSquared() << "\n";

	Kitten simpleKitten;
	simpleKitten.SetAge(42);
	simpleKitten.SetColour(KittenColour::Black);
	simpleKitten.SetName("Zoro Batmanov");
	simpleKitten.SetType(KittenType::ExplodingKittenType);

	simpleKitten.Print();

	ExplodingKitten kamikazeMiauKitten;
	kamikazeMiauKitten.SetAge(29);
	kamikazeMiauKitten.SetColour(KittenColour::Red);
	kamikazeMiauKitten.SetName("KamikazeMiauu");
	kamikazeMiauKitten.SetType(KittenType::ExplodingKittenType);

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

	CyborgKitten cyborgUltronKitten;
	cyborgUltronKitten.SetAge(28);
	cyborgUltronKitten.SetColour(KittenColour::White);
	cyborgUltronKitten.SetName("Ultron");
	cyborgUltronKitten.SetType(KittenType::CyborgKittenType);
	
	CyborgKitten cyborgHarryKitten;
	cyborgHarryKitten.SetAge(13);
	cyborgHarryKitten.SetColour(KittenColour::White);
	cyborgHarryKitten.SetName("Harry Cyborgov");
	cyborgHarryKitten.SetType(KittenType::CyborgKittenType);

	CyborgKitten cyborgZoroKitten;
	cyborgZoroKitten.SetAge(28);
	cyborgZoroKitten.SetColour(KittenColour::Black);
	cyborgZoroKitten.SetName("CyborgZoro");
	cyborgZoroKitten.SetType(KittenType::CyborgKittenType);

	Colony simpleColony;
	simpleColony.Add(&simpleKitten);
	simpleColony.Add(&cyborgKitten);
	simpleColony.Add(clonedCyborg);
	simpleColony.Add(&cyborgUltronKitten);
	simpleColony.Add(&cyborgHarryKitten);
	simpleColony.Add(&kamikazeMiauKitten);
	simpleColony.Add(&cyborgZoroKitten);


	int currentPopulation = 0;

	std::cout << "Starting a new Colony" << '\n';

	while (true)
	{
		simpleColony.OnStartOfNewPopulation();
		simpleColony.GrowPopulation();

		std::cout << currentPopulation << '\n';
		++currentPopulation;

	}


	delete clonedCyborg;


	return 0;
}


void Foo()
{
	std::cout << "Bananaaaa..." << '\n';
}