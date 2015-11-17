#include "naglowki.h";
#include "info.h"


int main ()
{
bool wyjscie = false;

info *wsk = 0;

FirstMenu:
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

		

		switch (wybor)
		{

		case 0:
			cout << " Wybrano opcje nr 0 " << endl;
			wsk->tutorial();
			Sleep(5000);
			system ("CLS");
		break;
		
		case 1:
			cout << " Wybrano opcje nr 1 " << endl;
			cout << "Program przeprowadzi Panstwa przez szereg pytan, wspomagajace decyzje w tworzeniu sieci " << endl;
			system ("CLS");

			do
			{
				int wybor1;

				cout << "*************************************************************" << endl;
				cout << "*************************************************************" << endl;
				cout << " Ponizej znajduja sie rodzaje budynkow w ktorych zaprojektuje sie siec: " << endl;
				cout << "*************************************************************" << endl;
				cout << "*************************************************************" << endl;
				cout << endl;
				cout << " Wybierz w jakim budynku zostanie zaprojektowana siec: " << endl;
				cout << endl;
				cout << " [0] Budynek jednopietrowy " << endl;
				cout << " [1] Budynek wielopietrowy " << endl;
				cout << " [2] Powrot do glownego menu " << endl;
				cout << endl;
				cout << "Co chcesz zrobic [0 1 2] " << endl;
				cin >> wybor1;
				
				switch (wybor1)
				{
				case 0:
					cout << " Wybrano opcje nr 0 " << endl;
					Sleep(5000);
					system ("CLS");
					break;

				case 1:
					cout << " Wybrano opcje nr 1 " << endl;
					Sleep(5000);
					system ("CLS");
					break;

				case 2:
					cout << "Powrot do glownego menu, dane zostana utracone " << endl;
					Sleep(3000);
					system ("CLS");
					goto FirstMenu;
				
					break;

				default:
					cout << "Wybrano opcje obecnie nie dostepna w programie, ponownie wybierz [ 0 1 2 ] " << endl;
					Sleep(5000);
					system("CLS");
				}
			}
			while (true);
			

		break;

		case 2:
			cout << "Program zamknie sie automatycznie po 5 s " << endl;
			Sleep(5000);
			return 0;
		break;

		default:
			cout << "Wybrano opcje obecnie nie dostepna w programie, ponownie wybierz [ 0 1 2 ] " << endl;
			Sleep(5000);
			system("CLS");
			
		break;

		}
	}
	while (true);

	return 0;
}