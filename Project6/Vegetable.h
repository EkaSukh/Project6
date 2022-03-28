#pragma once
#include <iostream>
#include "Fruit.h"
using namespace std;

class Vegetable: virtual public IFood
{
public:
	Vegetable(int salt); 
	void Show() override; 

protected:
	int _salt;
};


class Potato final : public Vegetable
{
public:
	Potato(int salt, int starch);
	void Show() override;
private:
	int _starch;
};

class Tomato final : public Vegetable
{
public:
	Tomato(int salt, string shape);
	void Show() override;
private:
	string _shape;

};

class Avocado : public Fruit, Vegetable
{
public:
	Avocado(int sugar, int salt);

	void Show() override;
};