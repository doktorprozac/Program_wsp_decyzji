#include "Projekt_fizyczny.h"
#include "info.h"
#include "Wymagania1.h"

Projekt_fizyczny::Projekt_fizyczny(void)
{
}


Projekt_fizyczny::~Projekt_fizyczny(void)
{
}

Projekt_logiczny *wsk8 = new Projekt_logiczny();
info *wsk9 = new info();
Wymagania1 *wsk10 = new Wymagania1();

void Projekt_fizyczny::tytul_projekt_fizyczny (int ilosc_segmentow)
{

		cout << "*************************************************************" << endl;
		cout << " ETAP TRZECI PROJEKT FIZYCZNY " << endl;
		cout << "*************************************************************" << endl;

		cout << "[1] Dobor sprzetu oraz ich specyfikacje" << endl;
		cout << "[2] Fizyczna topologia sieci " << endl;
		cout << "[3] Okablowanie" << endl;
		cout << "[4] Powrot do poprzedniego etapu" << endl;
		cout << "[5] Otworz zawartosc pliku" << endl;
		cout << endl;
		cout << "Wybierz opcje: " << endl;
		cin >> wybierz_opcje_;


		switch (wybierz_opcje_)
		{
		case 1:

			dobor_sprzetu(ilosc_segmentow);
			break;
		case 2:
			topologia_fizyczna_sieci();
			break;
		case 3:
			okablowanie_sieci();
			break;
		case 4:
			wsk8->powrot_do_poprzedniego_etapu();
			break;
		case 5:
			wsk10->czy_otworzyc_zawartosc_pliku();
			std::cout << "Press ENTER to close...";
			getchar();
			Sleep(2000);
			exit(0);

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
		ilosc_wybranego_sprzetu();
	}
	
	else if (ilosc_segmentow == 2)
	{
		wybrane_elementy_1(ilosc_segmentow);
		ilosc_wybranego_sprzetu();
	}

	else if (ilosc_segmentow == 3)
	{

		wybrane_elementy_1(ilosc_segmentow);
		ilosc_wybranego_sprzetu();

	}

	else if (ilosc_segmentow == 4)
	{
		wybrane_elementy(ilosc_segmentow);
		ilosc_wybranego_sprzetu();
	}
	// po dwa routery switch lub mosty
	else if (ilosc_segmentow == 5)
	{
		wybrane_elementy(ilosc_segmentow);
		ilosc_wybranego_sprzetu();
	
	}

	else if (ilosc_segmentow == 6)
	{
		wybrane_elementy(ilosc_segmentow);
		ilosc_wybranego_sprzetu();
	}

	else if (ilosc_segmentow == 7)
	{
		wybrane_elementy(ilosc_segmentow);
		ilosc_wybranego_sprzetu();
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
		
		Sleep(2000);
		system("CLS");
	}

	plik << "------------------------------" << endl;
	cout << endl;
	cout << "------------------------------" << endl;
	plik.close();
	tytul_projekt_fizyczny(wsk8->ilosc_segmentow);
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


void Projekt_fizyczny::wybrane_elementy(int ilosc_segmentow)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	plik << "===========================================" << endl;
	plik << "Ilosc koncentratorow: " << ilosc_segmentow << endl;
	//plik << "Kazdy koncentrator ma posiadac " << ilosc_segmentow << " portow " << endl;
	
	plik << "===========================================" << endl;
	do
	{
		wsk9->odczytaj_plik_z_danymi("Router.txt");
		czy_wybrac_sprzet_laczacy_segmenty_2("Router");

		wsk9->odczytaj_plik_z_danymi("Switch.txt");
		czy_wybrac_sprzet_laczacy_segmenty_2("Switch");

		wsk9->odczytaj_plik_z_danymi("Most.txt");
		czy_wybrac_sprzet_laczacy_segmenty_2("Most");

	} while (lista_sprzetu_do_zlaczenia_segmentow.size() < 2);

	cout << ilosc_segmentow << " kocentratory" << " + " << lista_sprzetu_do_zlaczenia_segmentow.size() << ": ";
	//ilosc_wybranego_sprzetu();
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

		wsk9->odczytaj_plik_z_danymi("Most.txt");
		czy_wybrac_sprzet_laczacy_segmenty("Most");

	} while (lista_sprzetu_do_zlaczenia_segmentow.size() < 1);

	cout << ilosc_segmentow << " kocentratory" << " + " << lista_sprzetu_do_zlaczenia_segmentow.size() << ": ";
	ilosc_wybranego_sprzetu();
	plik.close();
	
}

void Projekt_fizyczny::topologia_fizyczna_sieci()
{
	cout << "Topologia gwiazdy " << endl;
	cout << "Sugerowana topologia fizyczna : gwiazdy" << endl;

	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);
	plik << "---------------------------------------------------------------------------------------" << endl;
	plik << "W sieci wykorzystano koncentratory takze optymalnie jest zastosowanie topologii gwiazdy dla wszystkich segmentow" << endl;
	plik << "Sugerowana topologia: Gwiazdy" << endl;
	plik << "---------------------------------------------------------------------------------------" << endl;

	plik.close();
	tytul_projekt_fizyczny(wsk8->ilosc_segmentow);
}

void Projekt_fizyczny::okablowanie_sieci()
{
	
		cout << "Wybierz rodzaj okablowania dla wszystkich segmentow sieci " << endl;
		cout << "[1] Kabel koncentryczny " << endl;
		cout << "[2] Skretka " << endl;
		cout << "[3] Swiatlowod " << endl;
		cout << "Wybierz numer: " << endl;
		cin >> rodzaj_okablowania;

		switch (rodzaj_okablowania)
		{
		case 1:
			wsk9->odczytaj_plik_z_danymi("Kabel_koncentryczny.txt");
			czy_wybrac_rodzaj_okablowania("Kabel koncentryczny");
			break;
		case 2:
			wsk9->odczytaj_plik_z_danymi("Skretka.txt");
			czy_wybrac_rodzaj_okablowania("Skretka");
			break;
		case 3:
			wsk9->odczytaj_plik_z_danymi("Swiatlowod.txt");
			czy_wybrac_rodzaj_okablowania("Swiatlowod");
			break;

		default:
			cout << "Wybrano inna opcje " << endl;
			break;
		}

	
}

void Projekt_fizyczny::czy_wybrac_rodzaj_okablowania(string r_okablowania)
{
	cout << endl;
	cout << "Czy chcesz wykorzystac ten rodzaj okablowania ? [t/n] " << endl;
	cin >> odpowiedz_rodzaj_okablowania;

	if (odpowiedz_rodzaj_okablowania == 't' || odpowiedz_rodzaj_okablowania == 'T')
	{
		lista_okablowania_sieci.push_back(r_okablowania);
		lista_wybranego_okablowania(1);
	}
	else
	{
		system("CLS");
		okablowanie_sieci();
	}
}

void Projekt_fizyczny::lista_wybranego_okablowania(int ilosc)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	system("CLS");
	cout << " ZAWARTOSC LISTY WYBRANEGO OKABLOWANIA: " << endl;
	cout << "------------------------------" << endl;

	cout << lista_okablowania_sieci.size() << " z " << ilosc << endl;

	if (lista_okablowania_sieci.size() < ilosc)
	{
		for (list<string>::iterator a = lista_okablowania_sieci.begin(); a != lista_okablowania_sieci.end(); a++)
		{

			cout << *a << endl;
		}
	}

	else if (lista_okablowania_sieci.size() >= ilosc)
	{
		cout << endl;
		cout << "Lista pelna, nie mozna juz wybierac okabowania " << endl;
		plik << " ZAWARTOSC LISTY WYBRANEGO OKABLOWANIA: " << endl;
		plik << "------------------------------" << endl;
		for (list<string>::iterator a = lista_okablowania_sieci.begin(); a != lista_okablowania_sieci.end(); a++)
		{

			plik << "Okablowanie: " << *a << endl;
		}
		cout << endl;
		cout << "Ukonczono [3] Okablowanie " << endl;
		cout << endl;
		cout << endl;
		system("CLS");

		//
		plik << "------------------------------" << endl;
		cout << endl;
		cout << "------------------------------" << endl;
		
		tytul_projekt_fizyczny(wsk8->ilosc_segmentow);
		
		
	}
	
	
}
