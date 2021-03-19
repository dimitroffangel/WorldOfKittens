#pragma once
#include <vector>
#include "Kitten.h"

class Colony
{
private:
	std::vector<Kitten*> Kittens;
	int AgeOfColony;

public:
	void OnStartOfNewPopulation();
public:
	void GrowPopulation();
	void Add(Kitten* kitten);
	size_t GetNumberKittensInCurrentPopulation() const;

	int GetAgeOfColony() const;
};

