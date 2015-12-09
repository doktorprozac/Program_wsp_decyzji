#include "Wymagania1.h"
#include "naglowki.h"
#include "Projekt_logiczny.h"


Wymagania1::Wymagania1(void)
{
	
}


Wymagania1::~Wymagania1(void)
{
}


int* Wymagania1::get_liczba()
{
	return liczba;
}

//p_logiczny *wsk2;

void Wymagania1::tytul()
{
	cout << "*************************************************************" << endl;
	cout << " FAZA WSTEPNYCH WYMAGAN " << endl;
	cout << "*************************************************************" << endl;
}

int Wymagania1::budynek()
{
	
	Wymagania1 *wsk2 = new Wymagania1;
	wsk2->tytul();

	do
	{
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl;
	cout << "ETAP PIERWSZY, WSTEPNE WYMAGANIA: " << endl;
	cout << "*************************************************************" << endl;
	cout << "*************************************************************" << endl;
	cout << "Rodzaje budynkow, w ktorych mozna zaprojektowac siec" << endl;
	cout << "[1] Parterowiec " << endl;
	cout << "[2] Budynek wielopietrowy " << endl;
	cout << "[3] Powrot " << endl;
	
	cout << "Co chcesz wybrac: " << endl;
	cin >> wybor;


		switch (wybor)
		{
		case 1:
		wsk2->tytul();
		cout << " Wybrano [1] " << endl; 
		//wsk2->ilosc_pomieszczen();
		wsk2->urzadzenia(9);

		break;

		case 2:
		wsk2->tytul();
		cout << " Wybrano [2] " << endl;
		wsk2->ilosc_pieter();
		//wsk2->ilosc_pomieszczen();
		wsk2->urzadzenia(9);

		break;

		case 3:
		wsk2->tytul();
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
	delete wsk2;
}


int Wymagania1::ilosc_pieter()
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


int* Wymagania1::urzadzenia (int rozmiar)
{
	
	
	cout << "*************************************************************" << endl;
	cout << " URZADZENIA WCHODZACE W SKLAD PROJEKTOWANEJ SIECI " << endl;
	cout << "*************************************************************" << endl;

	cout << " Czy w sklad sieci beda wchodzic 'komputery stacjonarne' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe komputerow [max 5]: " << endl;
		cin >> this->liczba[0];

		while (this->liczba[0] < 0 || this->liczba[0] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[0];
		
		}
	
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[0] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'laptopy' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe laptopow [max 5]: " << endl;
		cin >> this->liczba[1];

		while (this->liczba[1] < 0 || this->liczba[1] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[1];
		
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[1] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'telewizory z dostepem do internetu' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe telewizorow [max 5]: " << endl;
		cin >> this->liczba[2];

		while (this->liczba[2] < 0 || this->liczba[2] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[2];
		
		}
		system ("CLS");

	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[2] = NULL;
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
		cin >> this->liczba[3];
		while (this->liczba[3] < 0 || this->liczba[3] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[3];
		
		}

		if (this->liczba[3] > 3)
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
				cin >> this->liczba[4];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				this->liczba[4] = NULL;
			}
			
			cout << "Czy wykorzystasz serwery niededykowane ? [t/n] " << endl;
			cin >> odpowiedz;
			if (odpowiedz == 't' || odpowiedz == 'T')
			{
				cout << "Podaj ilosc: " << endl;
				cin >> this->liczba[5];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				this->liczba[5] = NULL;
			}

			cout << "Czy wykorzystasz serwery specjalne ? [t/n] " << endl;
			cin >> odpowiedz;
			if (odpowiedz == 't' || odpowiedz == 'T')
			{
				cout << "Podaj ilosc: " << endl;
				cin >> this->liczba[6];
			}
			else if (odpowiedz == 'n' || odpowiedz == 'N')
			{
				this->liczba[6] = NULL;
			}

		}
		else
		{
			this->liczba[4] = NULL;
			this->liczba[5] = NULL;
			this->liczba[6] = NULL;
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[3] = NULL;
		this->liczba[4] = NULL;
		this->liczba[5] = NULL;
		this->liczba[6] = NULL;
		system ("CLS");
	}
	
	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'faxy ' ? [t/n]" << endl;
	cin >> odpowiedz;
	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj liczbe faxów [max 5]: " << endl;
		cin >> this->liczba[7];

		while (this->liczba[7] < 0 || this->liczba[7] > 5 )
		{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[7];
		
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[7] = NULL;
		system ("CLS");
	}

	cout << "-------------------------------------------------------------------" << endl;
	cout << " Czy w sklad sieci beda wchodzic 'telefony ' ? [t/n]" << endl;
	cin >> odpowiedz;

	if (odpowiedz == 't' || odpowiedz == 'T')
	{
		cout << "Podaj szacunkowa liczbe wszystkich telefonow [max 5]: " << endl;
		cin >> this->liczba[8];
		while (this->liczba[8] < 0 || this->liczba[8] > 5)
		{
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> this->liczba[8];
		}
		system ("CLS");
	}
	else if (odpowiedz == 'n' || odpowiedz == 'N')
	{
		this->liczba[8] = NULL;
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

		plik << "*************************************************************" << endl;
		plik << "*************************************************************" << endl;
		plik << "ETAP PIERWSZY, WSTEPNE WYMAGANIA: " << endl;
		plik << "*************************************************************" << endl;
		plik << "*************************************************************" << endl;
		plik<< "Komputery stacjonarne: " << liczba[0] << endl;
		plik<< "Laptopy: " << liczba[1] << endl;
		plik<< "Telewizory: " << liczba[2] << endl;
		plik<< "Drukarki sieciowe: " << liczba[3] << endl;
		plik<< "Serwery dedykowane: " << liczba[4] << endl;
		plik<< "Serwery niededykowane: " << liczba[5] << endl;
		plik<< "Serwery specjalne: " << liczba[6] << endl;
		plik<< "Faxy: " << liczba[7] << endl;
		plik<< "Telefony: " << liczba[8] << endl;
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
	
	
	Sleep(5000);
	system ("CLS");
	Projekt_logiczny *wsk4 = new Projekt_logiczny;
	

	wsk4->segmentacja_sieci(liczba,9);

	return liczba;

}

int * Wymagania1::odczyt_z_pliku()
{
	
	system ("CLS");
	
		string linia;
		fstream plik;
		plik.open("\\dane.txt", ios::in); // | ios:app -> dopisywanie do pliku
		if (plik.is_open())
		{
			
			int i = 0;

			while ( getline (plik,linia) )
			{

				/*cout << "aa " << endl;
				cout << linia.size() << endl;*/
				if (i >= 5 && i <= 13)
				{

				*(this->liczba+(i-5))  = linia.at(linia.length()-1)-'0';
				//cout << this->liczba+(i-3)  << endl;
				}
				i++;
				
			}
			


			plik.close();
		}
		else
		{
			cout << "Nie mozna otworzyc pliku " << endl;
		}
	
		return this->liczba;
	
}

