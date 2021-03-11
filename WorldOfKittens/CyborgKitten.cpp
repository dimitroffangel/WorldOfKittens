#include "CyborgKitten.h"

CyborgKitten* CyborgKitten::Replicate()
{
	std::cout << "Replicating a cyborg kitten..." << '\n';
	
	return new CyborgKitten(*this);
}
