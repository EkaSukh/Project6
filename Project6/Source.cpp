#include <iostream>
#include "Device.h"


using namespace std;   

int main()
{
	//Создание массива указателей на базовый класс
	IElectronics* EStore[7];
	//каждому указателю на базовый класс возможно присвоить адрес объекта класса наследника, реализуя соотношение is-a в публичном наследовании
	EStore[0] = new PlayerCase("Green", 30);//Прямое наследование 
	EStore[1] = new EBookCase("Black", 40);//Прямое наследование
	EStore[2] = new Player(100, 127, 80);//Наследование от двух классов
	EStore[3] = new EBook(500, 312, 120);//Наследование от двух классов
	EStore[4] = new EWatch(4, 280, 50);//Наследование от двух классов
	EStore[5] = new RunTracker(6, 450, 30);//Наследование от двух классов
	EStore[6] = new PortMixer(3, 40);//Прямое наследование

	bool open = true;
	while (open)
	{
		cout << "Choose an item: 1 - Player case, 2 - Ebook case, 3 - Player, 4 - Ebook, 5 - EWatch, 6 - RunTracker, 7 - Portative Mixer,  0 - to exit." << endl;
		int choice;
		cin >> choice;
		switch (choice) 
		{
		//Функция ShowSpec() задана как виртуальная в общем для всех объектов базовом классе
		//при обращении к объекту производного класса вызывается его версия функции
		case 1:
			EStore[0]->ShowSpec();//метод объекта класса PlayerCase
			break;
		case 2:
			EStore[1]->ShowSpec();//метод объекта класса EBookCase
			break;
		case 3:
			EStore[2]->ShowSpec();//метод объекта класса Player
			break;
		case 4:
			EStore[3]->ShowSpec();//метод объекта класса EBook
			break;
		case 5:
			EStore[4]->ShowSpec();//метод объекта класса EWatch
			break;
		case 6:
			EStore[5]->ShowSpec();//метод объекта класса RunTracker
			break;
		case 7:
			EStore[6]->ShowSpec();//метод объекта класса PortMixer
			break;
		case 0:
			open = false;
			break;

		default:
			cout << "Chose an item, 1 to 6, or 0 to exit.\n";
			break;
		}
	}

	//удаляет объекты созданные с помощью операции new
	delete EStore[0];
	delete EStore[1];
	delete EStore[2];
	delete EStore[3];
	delete EStore[4];
	delete EStore[5];
	delete EStore[6];

	return 0;
}