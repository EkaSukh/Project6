#pragma once
#include <iostream>
#include "Device.h"
using namespace std;

//��� ������� �����, ��������� ��������� � ��������� ������������
class IElectronics
{
public:
	IElectronics();
	virtual ~IElectronics() = default;//����������� ����������

	virtual void ShowSpec() = 0;//������� ����������, ����� �����������
};

//������ ������� ������������, �� �������� ������
class Device : virtual public IElectronics
{
protected://��� ���������� ����� �������� ��������� ������
	int _batteryLife;
public:
	Device(int value);
	
	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������, �� �������� ������
class Appliency : virtual public IElectronics
{
protected://��� ���������� ����� �������� ��������� ������
	int _weight;

public:
	Appliency(int weight);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ������ ������
//�������� ������� ��� ����������� ������������
class PortMixer final : public Device
{
private:
	int _heads;
public:
	PortMixer(int hds, int val);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ������ ������
//�������� ������� ��� ����������� ������������
class PlayerCase final : public Appliency
{
private:
	string _color;
public:
	PlayerCase(string clr, int val);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ������ ������
//�������� ������� ��� ����������� ������������
class EBookCase final : public Appliency
{
private:
	string _color;
public:
	EBookCase(string clr, int val);

	void ShowSpec() override;
};

//������ ������� ������������ �� ���� ������� ������� ������
//�������� ������� ��� ����������� ������������
class Player final : public Device, Appliency
{
private://����������� ���������� ������
	int _totalTracks;
public:
	Player(int v1, int v2, int v3);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ���� ������� ������� ������
//�������� ������� ��� ����������� ������������
class EBook final : public Device, Appliency
{
private: //����������� ���������� ������
	int _bookMem;
public:
	EBook(int v1, int v2, int v3);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ���� ������� ������� ������
//�������� ������� ��� ����������� ������������
class EWatch final : public Device, Appliency
{
private: //����������� ���������� ������
	int _Nregims;
public:
	EWatch(int v1, int v2, int v3);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};

//������ ������� ������������ �� ���� ������� ������� ������
//�������� ������� ��� ����������� ������������
class RunTracker final : public Device, Appliency
{
private: //����������� ���������� ������
	int _MaxDistance;
public:
	RunTracker(int v1, int v2, int v3);

	void ShowSpec() override;//����������� ���������� ���������� ��� ������� ������
};




