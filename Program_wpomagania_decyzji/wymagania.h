#include "naglowki.h"


class wymagania
{
int wybor, pietra, pomieszczenia, liczba, liczba1, liczba2; 
char odpowiedz;
	
public:
	void tytul();
	int budynek();
	int ilosc_pieter();
	int ilosc_pomieszczen();
	void urzadzenia();

};

void wymagania::tytul()
{
	cout << "*************************************************************" << endl;
	cout << " FAZA WSTEPNYCH WYMAGAN " << endl;
	cout << "*************************************************************" << endl;
}

int wymagania::budynek()
{
	wymagania *wsk1;
	wsk1 = new wymagania;

	wsk1->tytul();
	
	cout << "Rodzaje budynkow, w ktorych mozna zaprojektowac siec" << endl;
	cout << "[1] Parterowiec " << endl;
	cout << "[2] Budynek wielopietrowy " << endl;
	cout << "[3] Powrot " << endl;
	
	cout << "Co chcesz wybrac: " << endl;
	cin >> wybor;

	system ("CLS");
	switch (wybor)
	{
	case 1:
		wsk1->tytul();
		cout << " Wybrano [1] " << endl; 
		
		wsk1->ilosc_pomieszczen();
		wsk1->urzadzenia();

		break;

	case 2:
		wsk1->tytul();
		cout << " Wybrano [2] " << endl;
		wsk1->ilosc_pieter();
		wsk1->ilosc_pomieszczen();
		wsk1->urzadzenia();

		break;

	case 3:
		wsk1->tytul();
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


int wymagania::ilosc_pieter()
{
	pietra = 0;
	cout << "Podaj ilosc pieter [max 10]: " << endl;
	cin >> pietra;


		while (pietra < 0 || pietra > 10)
		{
		cout << "nie moze byc ujemna ilosc pieter lub wieciej niz 10 " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "Podaj jeszcze raz: " << endl;
		cout << "-------------------------------------------------" << endl;
		cin >> pietra;
		}

		if (pietra > 0 || pietra < 10)
		{
		cout << "ilosc podanych pieter: " << pietra << endl;
		}
	
		
		return pietra;
	
}

int wymagania::ilosc_pomieszczen()
{
	cout << "Podaj liczbe pomieszczen [max 10] " << endl;
	cin >> pomieszczenia;

	while (pomieszczenia < 0 || pomieszczenia > 10)
	{
	cout << " Podana wartosc nie spelnia kryteriow " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Podaj jeszcze raz: " << endl;
	cout << "-------------------------------------------------" << endl;
	cin >> pomieszczenia;
	}
			
	cout << "podano: " << pomieszczenia << " pomieszczen " << endl;
	
	return pomieszczenia;
}

void wymagania::urzadzenia()
{
	cout << "*************************************************************" << endl;
	cout << " URZADZENIA WCHODZACE W SKLAD PROJEKTOWANEJ SIECI " << endl;
	cout << "*************************************************************" << endl;

	cout << " Czy w sklad sieci beda wchodzic 'komputery stacjonarne' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't')
	{
		cout << "Podaj liczbe komputerow: " << endl;
		cin >> liczba;
	}
	else if (odpowiedz == 'n')
	{
		liczba = NULL;
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'laptopy' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't')
	{
		cout << "Podaj liczbe laptopow: " << endl;
		cin >> liczba1;
	}
	else if (odpowiedz == 'n')
	{
		liczba1 = NULL;
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'telewizory z dostepem do internetu' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't')
	{
		cout << "Podaj liczbe telewizorow: " << endl;
		cin >> liczba2;
	}
	else if (odpowiedz == 'n')
	{
		liczba2 = NULL;
	}
	
	
	cout << endl;
	cout << endl;
	cout << "PODSUMOWANIE: " << endl;
	cout << "Komputery stacjonarne: " << liczba << endl;
	cout << "Laptopy: " << liczba1 << endl;
	cout << "Telewizory: " << liczba2 << endl;

	//return true;
}