#include <iostream>
#include "Device.h"

using namespace std;

//������� �����. ����������� �� ���������
IElectronics::IElectronics()
{}

//�������� �����.������ ������� ������������. �����������
Device::Device(int value) : _batteryLife(value) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������
void Device::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife/60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
}

//�������� �����.������ ������� ������������. �����������
Appliency::Appliency(int weight): _weight(weight) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������
void Appliency::ShowSpec()
{
	cout << "Device has weight " << _weight << " gramm."<< endl;
}

//�������� �����.������ ������� ������������. �����������
PlayerCase::PlayerCase(string clr, int val) : Appliency(val), _color(clr) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void PlayerCase::ShowSpec()
{
	cout << "Player case has weight " << _weight << " gramm." << endl;
	cout << "Color of the case is " << _color << endl;
}
//�������� �����.������ ������� ������������. �����������
EBookCase::EBookCase(string clr, int val) : Appliency(val), _color(clr) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void EBookCase::ShowSpec()
{
	cout << "Electronic book case has weight " << _weight << " gramm." << endl;
	cout << "Color of the case is " << _color << endl;
}

//������ ������� ������������
PortMixer::PortMixer(int hds, int val) : Device(val), _heads(hds) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void PortMixer::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Number of different head types is " << _heads << endl;
}


//������ ������� ������������, �� ���� �������
Player::Player(int v1, int v2, int v3) : Device(v2), Appliency(v3), _totalTracks(v1) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void Player::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Total number of tracks is " << _totalTracks << endl;
}

//������ ������� ������������, �� ���� �������
EBook::EBook(int v1, int v2, int v3) : Device(v2), Appliency(v3), _bookMem(v1) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void EBook::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Electronic book memory " << _bookMem << " MB" << endl;

}

//������ ������� ������������, �� ���� �������
EWatch::EWatch(int v1, int v2, int v3) : Device(v2), Appliency(v3), _Nregims(v1) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>
void EWatch::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Electronic waych has " << _Nregims << " working regimes" << endl;

}

//������ ������� ������������, �� ���� �������
RunTracker::RunTracker(int v1, int v2, int v3) : Device(v2), Appliency(v3), _MaxDistance(v1) //��� �������� ������ <IElectronics> ����� ������ ����������� �� ���������
{}

//����������� ������ �������, ������������ � ������� ������ <IElectronics>void RunTracker::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Maximum distance length to memorize " << _MaxDistance << " miles." << endl;

}