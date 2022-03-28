#include <iostream>
#include "Device.h"

using namespace std;

//Базовый класс. Конструктор по умолчанию
IElectronics::IElectronics()
{}

//Дочерний класс.Первый уровень наследования. Конструктор
Device::Device(int value) : _batteryLife(value) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе
void Device::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife/60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
}

//Дочерний класс.Первый уровень наследования. Конструктор
Appliency::Appliency(int weight): _weight(weight) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе
void Appliency::ShowSpec()
{
	cout << "Device has weight " << _weight << " gramm."<< endl;
}

//Дочерний класс.Второй уровень наследования. Конструктор
PlayerCase::PlayerCase(string clr, int val) : Appliency(val), _color(clr) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void PlayerCase::ShowSpec()
{
	cout << "Player case has weight " << _weight << " gramm." << endl;
	cout << "Color of the case is " << _color << endl;
}
//Дочерний класс.Второй уровень наследования. Конструктор
EBookCase::EBookCase(string clr, int val) : Appliency(val), _color(clr) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void EBookCase::ShowSpec()
{
	cout << "Electronic book case has weight " << _weight << " gramm." << endl;
	cout << "Color of the case is " << _color << endl;
}

//Второй уровень наследования
PortMixer::PortMixer(int hds, int val) : Device(val), _heads(hds) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void PortMixer::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Number of different head types is " << _heads << endl;
}


//Второй уровень наследования, от двух классов
Player::Player(int v1, int v2, int v3) : Device(v2), Appliency(v3), _totalTracks(v1) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void Player::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Total number of tracks is " << _totalTracks << endl;
}

//Второй уровень наследования, от двух классов
EBook::EBook(int v1, int v2, int v3) : Device(v2), Appliency(v3), _bookMem(v1) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void EBook::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Electronic book memory " << _bookMem << " MB" << endl;

}

//Второй уровень наследования, от двух классов
EWatch::EWatch(int v1, int v2, int v3) : Device(v2), Appliency(v3), _Nregims(v1) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>
void EWatch::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Electronic waych has " << _Nregims << " working regimes" << endl;

}

//Второй уровень наследования, от двух классов
RunTracker::RunTracker(int v1, int v2, int v3) : Device(v2), Appliency(v3), _MaxDistance(v1) //для базового класса <IElectronics> будет вызван конструктор по умолчанию
{}

//собственная версия функции, определенной в базовом классе <IElectronics>void RunTracker::ShowSpec()
{
	cout << "Full batery life time is " << _batteryLife / 60 << " hours, " << _batteryLife % 60 << " minutes." << endl;
	cout << "Device has weight " << _weight << " gramm." << endl;
	cout << "Maximum distance length to memorize " << _MaxDistance << " miles." << endl;

}