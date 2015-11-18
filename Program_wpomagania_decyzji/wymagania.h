#include "naglowki.h"



class wymagania 
{

public:
	int budynek();
	int ilosc_pomieszczen();
};

int wymagania::budynek()
{
	cout << "Rodzaje budynkow, w ktorych mozna zaprojektowac siec" << endl;
	cout << "[1] Parterowiec " << endl;
	cout << "[2] Budynek wielopietrowy " << endl;
	cout << "[3] Powrot " << endl;
	int wybor;
	cout << "Co chcesz wybrac: " << endl;
	cin >> wybor;

	wymagania *wsk;
	wsk = new wymagania;

	switch (wybor)
	{
	case 1:
		cout << " Wybrano [1] " << endl; 
		
		wsk->ilosc_pomieszczen();
		

		break;

	case 2:
		cout << " Wybrano [2] " << endl;
		wsk->ilosc_pomieszczen();

		break;

	case 3:
		cout << " Wybrano [3] " << endl;
			do
			{
				boolean x = false;
			if (cin.get() == '\n')
				{
					x;
					system ("CLS");
				}
			}
			while (!true);
		break;

	default:
		cout << "nie ma takie opcji " << endl;
		break;
	}

	return wybor;

}

int wymagania::ilosc_pomieszczen()
{
	int pomieszczenia;
	cout << "Podaj liczbe pomieszczen " << endl;
	cin >> pomieszczenia;
	cout << "podano: " << pomieszczenia << " pomieszczen " << endl;
	return pomieszczenia;

}
