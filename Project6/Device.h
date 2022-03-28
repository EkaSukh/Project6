#pragma once
#include <iostream>
#include "Device.h"
using namespace std;

//Это базовый класс, реализует интерфейс в публичном наследовании
class IElectronics
{
public:
	IElectronics();
	virtual ~IElectronics() = default;//виртуальный деструктор

	virtual void ShowSpec() = 0;//функция интрефейса, чисто виртуальная
};

//первый уровень наследования, от базового класса
class Device : virtual public IElectronics
{
protected://эта переменная будет доступна дочернему классу
	int _batteryLife;
public:
	Device(int value);
	
	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//первый уровень наследования, от базового класса
class Appliency : virtual public IElectronics
{
protected://эта переменная будет доступна дочернему классу
	int _weight;

public:
	Appliency(int weight);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от одного класса
//конечный вариант без дальнейшего наследования
class PortMixer final : public Device
{
private:
	int _heads;
public:
	PortMixer(int hds, int val);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от одного класса
//конечный вариант без дальнейшего наследования
class PlayerCase final : public Appliency
{
private:
	string _color;
public:
	PlayerCase(string clr, int val);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от одного класса
//конечный вариант без дальнейшего наследования
class EBookCase final : public Appliency
{
private:
	string _color;
public:
	EBookCase(string clr, int val);

	void ShowSpec() override;
};

//второй уровень наследования от двух классов первого уровня
//конечный вариант без дальнейшего наследования
class Player final : public Device, Appliency
{
private://собственная переменная класса
	int _totalTracks;
public:
	Player(int v1, int v2, int v3);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от двух классов первого уровня
//конечный вариант без дальнейшего наследования
class EBook final : public Device, Appliency
{
private: //собственная переменная класса
	int _bookMem;
public:
	EBook(int v1, int v2, int v3);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от двух классов первого уровня
//конечный вариант без дальнейшего наследования
class EWatch final : public Device, Appliency
{
private: //собственная переменная класса
	int _Nregims;
public:
	EWatch(int v1, int v2, int v3);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};

//второй уровень наследования от двух классов первого уровня
//конечный вариант без дальнейшего наследования
class RunTracker final : public Device, Appliency
{
private: //собственная переменная класса
	int _MaxDistance;
public:
	RunTracker(int v1, int v2, int v3);

	void ShowSpec() override;//собственная реализация интерфэйса для данного класса
};




