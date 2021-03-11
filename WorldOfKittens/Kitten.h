#pragma once

#include <string>
#include <iostream>

enum KittenType
{
	ExplodingKittenType,
	CyborgKittenType,
	NonDefinedType
};

enum KittenColour
{
	Red,
	White,
	Black,
	Gray,
	NonDefinedColour
};

class Kitten
{
private:
	std::string Name;
	int Age;
	KittenType Type;
	KittenColour Colour;

public:
	Kitten()
	{
		this->Age = 22;
		this->Name = "Stamat";
		this->Type = KittenType::NonDefinedType;
		this->Colour = KittenColour::NonDefinedColour;

		std::cout << "Kitten was created" << '\n';
	}

	Kitten(const std::string& name)
	{
		this->Name = name;
	}

	Kitten(const std::string& name, int age, KittenType type, KittenColour colour);

	Kitten(const Kitten& other)
	{
		std::cout << "Kitten is copy constructed by another kitten huraaaay" << '\n';

		this->Name = other.Name;
		this->Age = other.Age;
		this->Type = other.Type;
		this->Colour = other.Colour;
	}

	~Kitten()
	{
		std::cout << "Kitten was destructed" << '\n';
	}

	void Print();
	void GrowOlder();

	void SetName(const std::string&);
	std::string GetName();

	void SetAge(int age);
	int GetAge();

	void SetType(KittenType type);
	KittenType GetType();


	void SetColour(KittenColour colour);
	KittenColour GetColour();
};

