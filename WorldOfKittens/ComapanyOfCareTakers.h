#pragma once
#include "KittenCareTaker.h"


class CompanyOfCareTakers
{
private:
	KittenCareTaker* ListOfCareTakers;
	int CapacityOfList;
	int CurrentSizeOfList;

public:
	CompanyOfCareTakers()
	{
		this->ListOfCareTakers = nullptr;
		this->CapacityOfList = 0;
		this->CurrentSizeOfList = 0;
	}

	CompanyOfCareTakers(const CompanyOfCareTakers& rhs)
	{
		// for ->
	}

	~CompanyOfCareTakers()
	{
		// delete all objects
	}
	
	// ? operator=

	void CreateKittenCareTaker(const std::string& name)
	{
		//KittenCareTaker* newKittenCareTaker = new KittenCareTaker();

		// assert this->CurrentSizeOfList == this->CapacityOfList

		if (this->CurrentSizeOfList == this->CapacityOfList)
		{
			// resize
			KittenCareTaker* newList = new KittenCareTaker[this->CapacityOfList * 2];

			for (size_t i = 0; i < this->CurrentSizeOfList; ++i)
			{
				newList[i] = this->ListOfCareTakers[i];
			}

			delete[] this->ListOfCareTakers;

			this->ListOfCareTakers = newList;
			this->CapacityOfList *= 2;
			this->CurrentSizeOfList = this->CurrentSizeOfList * 2 + 1;

			this->ListOfCareTakers[this->CurrentSizeOfList] = KittenCareTaker();
		}
	}
};

