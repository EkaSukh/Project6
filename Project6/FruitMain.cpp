#include <iostream>
#include "Fruit.h"
#include "Vegetable.h"

using namespace std;

int Fruitmain()
{
	IFood* grocery[5];
	grocery[0] = new Apple(50, "Green");
	grocery[1] = new Banana(50,10);
	grocery[2] = new Potato(10, 10);
	grocery[3] = new Tomato(50, "Cherry");
	grocery[4] = new Avocado(25, 30);

	bool open = true;
	while (open)
	{
		cout << "Choose a fruit: 1 - apple, 2 - banana, 3 - potato, 4 - tomato, 5 - avocado,  0 - to exit." << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			grocery[0]->Show();
			break;
		case 2:
			grocery[1]->Show();
			break;
		case 3:
			grocery[2]->Show();
			break;
		case 4:
			grocery[3]->Show();
			break;
		case 5:
			grocery[4]->Show();
			break;
		case 0:
			open = false;
			break;

		default:
			cout << "Chose a fruit, 1 to 4, or 0 to exit.\n";
			break;
		}
	}

	delete grocery[0];
	delete grocery[1];
	delete grocery[2];
	delete grocery[3];
	delete grocery[4];

	return 0;
}