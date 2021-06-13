#pragma once
#include <iostream>


class SingletonExample
{
public:
	static SingletonExample* GetInstance()
	{
		if (Singleton == nullptr)
		{
			Singleton = new SingletonExample();
		}

		return Singleton;
	}

	~SingletonExample()
	{
		delete Singleton;
	}

	void Print() const
	{
		std::cout << &Singleton << '\n';
	}

private:
	SingletonExample()
	{

	}
	SingletonExample(const SingletonExample& Example);
	static SingletonExample* Singleton;
};

