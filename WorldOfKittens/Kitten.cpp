#include "Kitten.h"
#include <iostream>

Kitten::Kitten(const std::string& name, int age, KittenType type, KittenColour colour)
{
	this->Name = name;
	this->Age = age;
	this->Type = type;
	this->Colour = colour;
}

void Kitten::Print()
{
	std::cout << "Kitten name is " << this->Name
		<< " Age is " << this->Age
		<< " Type is " << this->Type
		<< " Colour is " << this->Colour << '\n';
}

void Kitten::GrowOlder()
{
	++this->Age;
}

void Kitten::SetAge(int age)
{
	this->Age = age;
}

int Kitten::GetAge()
{
	return this->Age;
}

void Kitten::SetType(KittenType type)
{
	this->Type = type;
}

KittenType Kitten::GetType()
{
	return this->Type;
}

void Kitten::SetColour(KittenColour colour)
{
	this->Colour = colour;
}

KittenColour Kitten::GetColour()
{
	return this->Colour;
}

void Kitten::SetName(const std::string& name)
{
	this->Name = name;
}

std::string Kitten::GetName()
{
	return this->Name;
}
