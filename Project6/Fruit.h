#pragma once
#include <iostream>
using namespace std;
class IFood
{
public:
	virtual void Show() = 0; 
	virtual ~IFood() = default;
};

class Fruit: virtual public IFood
{
public:
	Fruit(int sugar);
	
	void Show() override;
protected:
	int _sugar;
};

class Apple final : public Fruit
{
public:
	Apple(int sugar, const string& color);

	void Show() override;
	
private:
	string _color;
};

class Banana final : public Fruit
{
public:
	Banana(int sugar, int rip);
	void Show() override;
private:
	int _ripeness;
};


