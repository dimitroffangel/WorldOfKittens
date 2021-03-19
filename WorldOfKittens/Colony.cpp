#include "Colony.h"

#include <iostream>

#include "CyborgKitten.h"
#include "ExplodingKitten.h"

void Colony::OnStartOfNewPopulation()
{
	for (int i = 0; i < this->Kittens.size(); ++i)
	{
		Kitten* currentKitten = this->Kittens[i];

		if (currentKitten == nullptr)
		{
			std::cout << "Colony::OnStartOfNewPopulation() currentKitten == nullptr" << '\n';
			return;
		}

		if (currentKitten->GetType() == KittenType::CyborgKittenType)
		{
			CyborgKitten* currentCyborgKitten = static_cast<CyborgKitten*>(currentKitten);

			Kitten* newKitten = currentCyborgKitten->Replicate();
			//this->Kittens.push_back(newKitten);
			this->Kittens.insert(this->Kittens.begin() + i, newKitten);
			++i;
		}

		else if (currentKitten->GetType() == KittenType::ExplodingKittenType)
		{
			//ExplodingKitten* currentExplodingKitten = static_cast<ExplodingKitten*>(currentKitten);

			//currentExplodingKitten->ExplodeKitten();

			//// remove the two adjacent kiiten if they exist
			//if (i > 0)
			//{
			//	Kitten* leftKitten = this->Kittens[i - 1];

			//  TODO:: nullpointer validation 
			//	leftKitten->Print();
			//	std::cout << "This kitten just exploded" << '\n';
			//	// remove now
			//	this->Kittens.erase(this->Kittens.begin() + (i - 1));
			//	--i;
			//}

			//if (i < colonySize)
			//{
			//	Kitten* leftKitten = this->Kittens[i + 1];
			
			//  TODO:: nullpointer validation 
			//	leftKitten->Print();
			//	std::cout << "This kitten just exploded" << '\n';
			//	// remove now
			//	this->Kittens.erase(this->Kittens.begin() + (i + 1));
			//}

			//this->Kittens.erase(this->Kittens.begin() + i);
			//++i;

			// remove the two from the right kittens

			// before the last last position
			if (i < this->Kittens.size() - 2)
			{
				for (size_t j = 0; j < 3; ++j)
				{
					if (this->Kittens[j + i] == nullptr)
					{
						std::cout << "Colony::OnStartOfNewPopulation() this->Kittens[i] != nullptr" << '\n';
						return;
					}

					this->Kittens[j + i]->Print();
					std::cout << "This kitten just exploded... " << '\n';
				}

				this->Kittens.erase(this->Kittens.begin() + i, this->Kittens.begin() + i + 3);
				--i;
			}

			// on last last position
			else
			{
				this->Kittens.erase(this->Kittens.begin() + i, this->Kittens.end());

				std::cout << "This kitten just exploded... " << '\n';

				return;
			}
		}
	}
}

// make each cat grow older
void Colony::GrowPopulation()
{
	for (int i = 0; i < this->Kittens.size(); ++i)
	{
		Kitten* currentKitten = this->Kittens[i];

		if (currentKitten == nullptr)
		{
			std::cout << "void Colony::GrowPopulation currentKitten == nullptr" << '\n';
			return;
		}

		currentKitten->GrowOlder();

		if (currentKitten->GetType() != KittenType::CyborgKittenType && currentKitten->GetAge() >= 15)
		{
			// currentKitten dies
			this->Kittens.erase(this->Kittens.begin() + i);
			--i;
		}

		else if (currentKitten->GetType() == KittenType::CyborgKittenType && currentKitten->GetAge() >= 30)
		{
			currentKitten->Print();
			std::cout << "This kitten just died..." << '\n';
			this->Kittens.erase(this->Kittens.begin() + i);
			--i;
		}
	}
}

void Colony::Add(Kitten* kitten)
{
	if (kitten == nullptr)
	{
		std::cout << "Colony::Add(Kitten* kitten) kitten == nullptr" << '\n';
		return;
	}

	this->Kittens.push_back(kitten);
}

size_t Colony::GetNumberKittensInCurrentPopulation() const
{
	return this->Kittens.size();
}

int Colony::GetAgeOfColony() const
{
	return this->AgeOfColony;
}
