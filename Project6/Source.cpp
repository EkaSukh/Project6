#include <iostream>
#include "Device.h"


using namespace std;   

int main()
{
	//�������� ������� ���������� �� ������� �����
	IElectronics* EStore[7];
	//������� ��������� �� ������� ����� �������� ��������� ����� ������� ������ ����������, �������� ����������� is-a � ��������� ������������
	EStore[0] = new PlayerCase("Green", 30);//������ ������������ 
	EStore[1] = new EBookCase("Black", 40);//������ ������������
	EStore[2] = new Player(100, 127, 80);//������������ �� ���� �������
	EStore[3] = new EBook(500, 312, 120);//������������ �� ���� �������
	EStore[4] = new EWatch(4, 280, 50);//������������ �� ���� �������
	EStore[5] = new RunTracker(6, 450, 30);//������������ �� ���� �������
	EStore[6] = new PortMixer(3, 40);//������ ������������

	bool open = true;
	while (open)
	{
		cout << "Choose an item: 1 - Player case, 2 - Ebook case, 3 - Player, 4 - Ebook, 5 - EWatch, 6 - RunTracker, 7 - Portative Mixer,  0 - to exit." << endl;
		int choice;
		cin >> choice;
		switch (choice) 
		{
		//������� ShowSpec() ������ ��� ����������� � ����� ��� ���� �������� ������� ������
		//��� ��������� � ������� ������������ ������ ���������� ��� ������ �������
		case 1:
			EStore[0]->ShowSpec();//����� ������� ������ PlayerCase
			break;
		case 2:
			EStore[1]->ShowSpec();//����� ������� ������ EBookCase
			break;
		case 3:
			EStore[2]->ShowSpec();//����� ������� ������ Player
			break;
		case 4:
			EStore[3]->ShowSpec();//����� ������� ������ EBook
			break;
		case 5:
			EStore[4]->ShowSpec();//����� ������� ������ EWatch
			break;
		case 6:
			EStore[5]->ShowSpec();//����� ������� ������ RunTracker
			break;
		case 7:
			EStore[6]->ShowSpec();//����� ������� ������ PortMixer
			break;
		case 0:
			open = false;
			break;

		default:
			cout << "Chose an item, 1 to 6, or 0 to exit.\n";
			break;
		}
	}

	//������� ������� ��������� � ������� �������� new
	delete EStore[0];
	delete EStore[1];
	delete EStore[2];
	delete EStore[3];
	delete EStore[4];
	delete EStore[5];
	delete EStore[6];

	return 0;
}