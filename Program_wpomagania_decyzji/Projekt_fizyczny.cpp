#include "Projekt_fizyczny.h"
#include "info.h"

Projekt_fizyczny::Projekt_fizyczny(void)
{
}


Projekt_fizyczny::~Projekt_fizyczny(void)
{
}

Projekt_logiczny *wsk8 = new Projekt_logiczny();
info *wsk9 = new info();

void Projekt_fizyczny::tytul_projekt_fizyczny (int ilosc_segmentow)
{
		cout << "*************************************************************" << endl;
		cout << " ETAP TRZECI PROJEKT FIZYCZNY " << endl;
		cout << "*************************************************************" << endl;
	
		cout << "[1] Dobor sprzetu oraz ich specyfikacje" << endl;
		cout << "[2] Specyfikacja urzadzen " << endl;
		cout << "[3] Fizyczna topologia sieci" << endl;
		cout << "[4] Okablowanie" << endl;
		cout << "[5] Powrot do poprzedniego etapu" << endl;
		cout << endl;
		cout << "Wybierz odpowiednia opcje: " << endl;
		cin >> wybierz_opcje_;

		
			switch (wybierz_opcje_)
			{
			case 1:
				
				dobor_sprzetu(ilosc_segmentow);
				
				break;
			case 2:
				specyfikacja_sprzetu();
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				wsk8->powrot_do_poprzedniego_etapu();
				break;

			default:
				cout << "Brak opcji" << endl;
				break;
			}

}

int Projekt_fizyczny::dobor_sprzetu(int ilosc_segmentow)
{
	
	cout << "Laczna ilosc klastrow: " << ilosc_segmentow << endl;

	if (ilosc_segmentow == 1)
	{
		wybrane_elementy_1(ilosc_segmentow);
	}
	
	else if (ilosc_segmentow == 2)
	{
		wybrane_elementy_1(ilosc_segmentow);
	}

	else if (ilosc_segmentow == 3)
	{

		wybrane_elementy_1(ilosc_segmentow);
		ilosc_wybranego_sprzetu();

	}

	else if (ilosc_segmentow == 4)
	{
		wybrane_elementy(ilosc_segmentow);
	}
	// po dwa routery switch lub mosty
	else if (ilosc_segmentow == 5)
	{
		wybrane_elementy(ilosc_segmentow);
	
	}

	else if (ilosc_segmentow == 6)
	{
		wybrane_elementy(ilosc_segmentow);
	}

	else if (ilosc_segmentow == 7)
	{
		wybrane_elementy(ilosc_segmentow);
	}

	return ilosc_segmentow;
}

void Projekt_fizyczny::lista_sprzetu(int ilosc_sprzetu)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	system("CLS");
	cout << " Oto wybrany sprzet: " << endl;
	cout << "------------------------------" << endl;

	cout << lista_sprzetu_do_zlaczenia_segmentow.size() <<  " z " << ilosc_sprzetu << endl;
	

	if (lista_sprzetu_do_zlaczenia_segmentow.size() < ilosc_sprzetu)
	{
		for (list<string>::iterator a = lista_sprzetu_do_zlaczenia_segmentow.begin(); a != lista_sprzetu_do_zlaczenia_segmentow.end(); a++)
		{

			cout << *a << endl;
		}
	}
	else if (lista_sprzetu_do_zlaczenia_segmentow.size() >= ilosc_sprzetu)
	{
		cout << endl;
		cout << "Lista pelna, nie mozna juz wybierac sprzetu " << endl;
		plik << " WYBRANY SPRZET DO POLACZENIA Z KONCENTRATORAMI: " << endl;
		plik << "------------------------------" << endl;
		for (list<string>::iterator a = lista_sprzetu_do_zlaczenia_segmentow.begin(); a != lista_sprzetu_do_zlaczenia_segmentow.end(); a++)
		{

			plik << "Sprzet: " << *a << endl;
		}
		specyfikacja_sprzetu();
		Sleep(2000);
		system("CLS");
	}

	plik << "------------------------------" << endl;
	cout << endl;
	cout << "------------------------------" << endl;
	plik.close();
}

void Projekt_fizyczny::czy_wybrac_sprzet_laczacy_segmenty(string nazwa_programu)
{
	cout << endl;
	cout << "Czy wykorzystac ten sprzet ? [t/n]" << endl;
	cin >> odpowiedz_wybrany_sprzet;

	if (odpowiedz_wybrany_sprzet == 't' || odpowiedz_wybrany_sprzet == 'T')
	{
			
			lista_sprzetu_do_zlaczenia_segmentow.push_back(nazwa_programu);
			cout << "Wybrano" << endl;
			lista_sprzetu(1);
	}
	
}

void Projekt_fizyczny::czy_wybrac_sprzet_laczacy_segmenty_2(string nazwa_programu)
{
	cout << endl;
	cout << "Czy wykorzystac ten sprzet ? [t/n]" << endl;
	cin >> odpowiedz_wybrany_sprzet;

	if (odpowiedz_wybrany_sprzet == 't' || odpowiedz_wybrany_sprzet == 'T')
	{
		lista_sprzetu_do_zlaczenia_segmentow.push_back(nazwa_programu);
		cout << "Wybrano" << endl;
		lista_sprzetu(2);
		
	}
	
}

void Projekt_fizyczny::ilosc_wybranego_sprzetu()
{
	for (list<string>::iterator a = lista_sprzetu_do_zlaczenia_segmentow.begin(); a != lista_sprzetu_do_zlaczenia_segmentow.end(); a++)
	{

		cout  << " , " << *a;
	}	
}

void Projekt_fizyczny::specyfikacja_sprzetu()
{
	cout << "blblblblbllb" << endl;
}

void Projekt_fizyczny::wybrane_elementy(int ilosc_segmentow)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	plik << "===========================================" << endl;
	plik << "Ilosc koncentratorow: " << ilosc_segmentow << endl;
	plik << "===========================================" << endl;
	do
	{
		wsk9->odczytaj_plik_z_danymi("Router.txt");
		czy_wybrac_sprzet_laczacy_segmenty_2("Router");

		wsk9->odczytaj_plik_z_danymi("Switch.txt");
		czy_wybrac_sprzet_laczacy_segmenty_2("Switch");
	} while (lista_sprzetu_do_zlaczenia_segmentow.size() < 2);

	cout << ilosc_segmentow << " kocentratory" << " + " << lista_sprzetu_do_zlaczenia_segmentow.size() << ": ";
	ilosc_wybranego_sprzetu();
	//lista_sprzetu(2);
	plik.close();
}

void Projekt_fizyczny::wybrane_elementy_1(int ilosc_segmentow)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	plik << "===========================================" << endl;
	plik << "Ilosc koncentratorow: " << ilosc_segmentow << endl;
	plik << "===========================================" << endl;
	do
	{
		wsk9->odczytaj_plik_z_danymi("Router.txt");
		czy_wybrac_sprzet_laczacy_segmenty("Router");

		wsk9->odczytaj_plik_z_danymi("Switch.txt");
		czy_wybrac_sprzet_laczacy_segmenty("Switch");
	} while (lista_sprzetu_do_zlaczenia_segmentow.size() < 1);

	cout << ilosc_segmentow << " kocentratory" << " + " << lista_sprzetu_do_zlaczenia_segmentow.size() << ": ";
	ilosc_wybranego_sprzetu();
	//lista_sprzetu(2);
	plik.close();
}