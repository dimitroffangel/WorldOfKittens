#include "CyborgKitten.h"

CyborgKitten* CyborgKitten::Replicate() const
{
	std::cout << "Replicating a cyborg kitten..." << '\n';
	
	return new CyborgKitten(*this);
}
