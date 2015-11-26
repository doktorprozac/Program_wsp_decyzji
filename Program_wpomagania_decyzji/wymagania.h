#include "naglowki.h"


class wymagania
{
int wybor, pietra, pomieszczenia; 
int liczba[12];
char odpowiedz;

public:
	void tytul();
	int budynek();
	int ilosc_pieter();
	int ilosc_pomieszczen();
	int urzadzenia();

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

	do
	{
	cout << "Rodzaje budynkow, w ktorych mozna zaprojektowac siec" << endl;
	cout << "[1] Parterowiec " << endl;
	cout << "[2] Budynek wielopietrowy " << endl;
	cout << "[3] Powrot " << endl;
	
	cout << "Co chcesz wybrac: " << endl;
	cin >> wybor;


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
			system ("CLS");
		break;

		default:
		cout << "nie ma takie opcji " << endl;
		break;

		}
	}
	while (true);


	return wybor;

}


int wymagania::ilosc_pieter()
{
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
		system ("CLS");
	
		return pietra;
	
}

int wymagania::ilosc_pomieszczen()
{
	
	cout << "Podaj laczna liczbe pomieszczen [max 10] " << endl;
	cin >> pomieszczenia;

	while (pomieszczenia < 0 || pomieszczenia > 10 )
	{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> pomieszczenia;
		
	}
			
	cout << "podano: " << pomieszczenia << " pomieszczen " << endl;
	liczba[9] = pomieszczenia;
	system ("CLS");
	return pomieszczenia;
}

int wymagania::urzadzenia()
{
	
	cout << "*************************************************************" << endl;
	cout << " URZADZENIA WCHODZACE W SKLAD PROJEKTOWANEJ SIECI " << endl;
	cout << "*************************************************************" << endl;

	cout << " Czy w sklad sieci beda wchodzic 'komputery stacjonarne' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe komputerow [max 5]: " << endl;
		cin >> liczba[0];

		while (liczba[0] < 0 || liczba[0] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> liczba[0];
		
		}
	
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[0] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'laptopy' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe laptopow [max 5]: " << endl;
		cin >> liczba[1];

		while (liczba[1] < 0 || liczba[1] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> liczba[1];
		
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[1] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'telewizory z dostepem do internetu' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe telewizorow [max 5]: " << endl;
		cin >> liczba[2];

		while (liczba[2] < 0 || liczba[2] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> liczba[2];
		
		}
		system ("CLS");

	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[2] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'drukarki sieciowe ' ? [t/n]" << endl;
	cin >> odpowiedz;
	/*if (!odpowiedz == 't' || !odpowiedz == 'T')
	{
		cout << "niet " << endl;
	}*/
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe drukarek sieciowych [max 5]: " << endl;
		cin >> liczba[3];
		while (liczba[3] < 0 || liczba[3] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> liczba[3];
		
		}

		if (liczba[3] > 3)
		{
			cout << "Potrzebny jest serwer [max 3 lacznie], oto trzy typy: " << endl;
			cout << "[1] Dedykowany " << endl;
			cout << "[2] Niededykowany " << endl;
			cout << "[3] Specjalny " << endl;

			cout << "Czy wykorzystasz serwery dedykowane ? [t/n] " << endl;
			cin >> odpowiedz;
			if (odpowiedz == 't' || odpowiedz == 'T')
			{
				cout << "Podaj ilosc: " << endl;
				cin >> liczba[4];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				liczba[4] = NULL;
			}
			
			cout << "Czy wykorzystasz serwery niededykowane ? [t/n] " << endl;
			cin >> odpowiedz;
			if (odpowiedz == 't' || odpowiedz == 'T')
			{
				cout << "Podaj ilosc: " << endl;
				cin >> liczba[5];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				liczba[5] = NULL;
			}

			cout << "Czy wykorzystasz serwery specjalne ? [t/n] " << endl;
			cin >> odpowiedz;
			if (odpowiedz == 't' || odpowiedz == 'T')
			{
				cout << "Podaj ilosc: " << endl;
				cin >> liczba[6];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				liczba[6] = NULL;
			}

		}
		else
		{
			liczba[4] = NULL;
			liczba[5] = NULL;
			liczba[6] = NULL;
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[3] = NULL;
		liczba[4] = NULL;
		liczba[5] = NULL;
		liczba[6] = NULL;
		system ("CLS");
	}
	
	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'faxy ' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe faxów [max 5]: " << endl;
		cin >> liczba[7];

		while (liczba[7] < 0 || liczba[7] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> liczba[7];
		
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[7] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'telefony ' ? [t/n]" << endl;
	cin >> odpowiedz;

	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj szacunkowa liczbe wszystkich telefonow: " << endl;
		cin >> liczba[8];
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		liczba[8] = NULL;
		system ("CLS");
	}
	

	cout << "Zapisac dane do pliku ? [t/n] " << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		fstream plik;
		// dane zapisywane na dysku D:
		plik.open("\\dane.txt", ios::out); // | ios:app -> dopisywanie do pliku
		
		if (plik.good() == false)
		{
		cout << "nie udalo sie odczytac pliku z pytaniami " << endl;
		}

		plik<< "-------------------------------------------------------" << endl;
		plik<< "PODSUMOWANIE: " << endl;
		plik<< "-------------------------------------------------------" << endl;
		plik<< "Komputery stacjonarne: " << liczba[0] << endl;
		plik<< "Laptopy: " << liczba[1] << endl;
		plik<< "Telewizory: " << liczba[2] << endl;
		plik<< "Drukarki sieciowe: " << liczba[3] << endl;
		plik<< "Serwery dedykowane: " << liczba[4] << endl;
		plik<< "Serwery niededykowane: " << liczba[5] << endl;
		plik<< "Serwery specjalne: " << liczba[6] << endl;
		plik<< "Faxy: " << liczba[7] << endl;
		plik<< "Telefony: " << liczba[8] << endl;
		plik<< "Ilosc pomieszczen: " << liczba[9] << endl;
		plik<< "-------------------------------------------------------" << endl;
		plik<< "-------------------------------------------------------" << endl;
		
		plik.close();
		cout << "Zapisano informacje do pliku 'dane.txt' na dysku D:" << endl;
	}

	system("CLS");
	cout << "Otworzyc zawartosc pliku ? [t/n] " << endl;
	cin >> odpowiedz;
	system ("CLS");
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		string linia;
		fstream plik;
		plik.open("\\dane.txt", ios::in); // | ios:app -> dopisywanie do pliku
		if (plik.is_open())
		{
			while ( getline (plik,linia) )
			{
			 cout << linia << '\n';
			}

			plik.close();
		}
		else
		{
			cout << "Nie mozna otworzyc pliku " << endl;
		}
	}

	

	return liczba[12];
}

