#include "naglowki.h"
#include "Wymagania1.h"
#include "info.h"


int main ()
{
bool wyjscie = false;

info *wsk;
wsk = new info;

Wymagania1 *wsk1 = new Wymagania1;


	do
	{
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << " SYSTEM WSPOMAGAJACY PROJEKTOWANIE SIECI KOMPUTEROWYCH " << endl;
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << endl;
		cout << " MENU GLOWNE: " <<	endl;
		cout << endl;
		cout << " [0] Informacje o programie  " << endl;
		cout << " [1] Zaprojektuj wlasna siec " << endl;
		cout << " [2] Wyjscie z programu " << endl;
		cout << endl;

		int wybor;
		cout << "Co chcesz zrobic [0 1 2] " << endl;
		cin >> wybor;

		boolean x = false;

		switch (wybor)
		{
		case 0:
			do
			{
			system ("CLS");
			cout << " Wybrano opcje nr 0 " << endl;
			wsk->tutorial();
				if (cin.get() == '\n')
				{
					x;
					system ("CLS");
				}
			}
			while (!true);
		break;
		
		case 1:
			system ("CLS");
			wsk1->budynek();
		

		break;

		case 2:
			cout << "Program zamknie sie automatycznie po 5 s " << endl;
			Sleep(5000);
			return 0;
		break;

		default:
			cout << "Wybrano opcje obecnie nie dostepna w programie, ponownie wybierz [ 0 1 2 ] " << endl;
			Sleep(3000);
			system("CLS");

		continue;
		
		}
	}
	
	while (true);

	delete wsk, wsk1;

	return 0;
}