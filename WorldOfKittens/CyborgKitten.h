#pragma once

#include "Kitten.h"

// CyborgKitten to be at least Kitten
class CyborgKitten : public Kitten
{
public:
	CyborgKitten* Replicate() const;
};

