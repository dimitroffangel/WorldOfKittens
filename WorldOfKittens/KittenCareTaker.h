#pragma once
#include "Kitten.h"


class KittenCareTaker
{
public:
	int* NumberOfCareTakers;
	Kitten* KittenTakingCareOf;

public:
	KittenCareTaker()
	{
		this->KittenTakingCareOf = new Kitten();
		/*
			added default info
		*/
		this->NumberOfCareTakers = new int(1);
	}

	KittenCareTaker(const KittenCareTaker& other)
	{
		this->KittenTakingCareOf = other.KittenTakingCareOf;

		this->NumberOfCareTakers = other.NumberOfCareTakers;

		if (this->NumberOfCareTakers == nullptr)
		{
			std::cout << "KittenCareTaker::KittenCareTaker(const KittenCareTaker& other) this->NumberOfCareTakers == nullptr" << '\n';

		}
		
		else
		{
			++(*this->NumberOfCareTakers);
		}
	}


	~KittenCareTaker()
	{
		// TODO nullptr ?
		--(*this->NumberOfCareTakers);

		if (*this->NumberOfCareTakers == 0)
		{
			delete this->KittenTakingCareOf;
			delete this->NumberOfCareTakers;
		}
	}

	KittenCareTaker& operator=(const KittenCareTaker& rhs)
	{
		if (this != &rhs)
		{
			// TODO nullptr? 
			--(*this->NumberOfCareTakers);

			if (*this->NumberOfCareTakers == 0)
			{
				delete this->KittenTakingCareOf;
				delete this->NumberOfCareTakers;
			}

			this->KittenTakingCareOf = rhs.KittenTakingCareOf;
			this->NumberOfCareTakers = rhs.NumberOfCareTakers;

			++(*this->NumberOfCareTakers);
		}

		return *this;
	}


};

