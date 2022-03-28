#include <iostream>
#include "Fruit.h"
using namespace std;

void IFood::Show()
{ cout << "Food item" << endl; }

//IFood::~IFood()
//{}

Fruit::Fruit(int sugar) : _sugar(sugar)
{}

void Fruit::Show()
{
	cout << "Basic Fruit sugar: " << _sugar << endl;
}

Apple::Apple(int sugar, const string& color) : Fruit(sugar), _color(color)
{}

void Apple::Show() 
{
	
	cout << "Apple sugar per 100g: " << _sugar << endl;
}

Banana::Banana(int sugar, int rip) : Fruit(sugar), _ripeness(rip)
{}

void Banana::Show()
{

	cout << "Banana, ripeness: " << _ripeness << "sugar per 100g:" << _sugar << endl;
}