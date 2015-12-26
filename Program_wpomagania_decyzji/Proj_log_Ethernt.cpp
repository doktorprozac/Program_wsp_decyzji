#include "Proj_log_Ethernt.h"
#include "naglowki.h"



Proj_log_Ethernt::Proj_log_Ethernt(void)
{
}


Proj_log_Ethernt::~Proj_log_Ethernt(void)
{
}

list <string> lista;


void Proj_log_Ethernt::tech_ethernet_10Base2(int &klastry) 
{
	cout << endl;
	cout << " Technologia zwana 'Cienki koncentryk', " << endl;
	cout << " uzywa kabla koncentrycznego o srednicy ok. 5 mm " << endl;
	cout << " Kabel ma biec pomiedzy wszystkimi kartami sieciowymi wpietymi do sieci  " << endl;
	cout << " Karty laczy sie za pomoca trojnika " << endl;
	cout << " Maksymalna dlugosc segmentu: 185 m " << endl;
	cout << " Wada rozwiazania: uszkodzenie kabla w jednym miejscu " << endl;
	cout << " odbiera dostep do calego segmentu " << endl;
	cout << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 10Base2 ";
		lista.push_back(nazwa);

	}

	Sleep(5000);

}

void Proj_log_Ethernt::tech_ethernet_10BaseFL(int &klastry)
{
	cout << " Pasmo podstawowe 10 Mbps " << endl;
	cout << " Korzysta z kabla swiatlowodowego " << endl;
	cout << " Uzywa sie do laczenia stacji uzytkownikow " << endl;
	cout << " Maksymalna dlugosc segmentu: 1000 m " << endl;
	cout << " Zalety: obojetny na zaklucenia, szumy, warunki atmosferyczne " << endl;
	cout << " Wady: trudnosc w montazu, mala eleastycznosc kabla, drogi " << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 10BaseFL ";
		lista.push_back(nazwa);

	}


	Sleep(5000);

}

void Proj_log_Ethernt::tech_ethernet_100BaseT(int &klastry)
{
	cout << "Fast Ethernet, przeplywnosc 100 Mbit/s " << endl;
	cout << "Dla sieci lokalnych w topologii gwiazdy " << endl;
	cout << "Realizowany za pomoca: ekranowej skretki STP,  " << endl;
	cout << "swiatlowodow wielomodowych,  " << endl;
	cout << "nieekranowej pary przewodow symetrycznych " << endl;
	cout << "Maksymalny zasieg: 100 m " << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{

		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 100BaseT ";
		lista.push_back(nazwa);
	}

}

void Proj_log_Ethernt::tech_ethernet_100BaseTX(int &klastry)
{
	cout << "Fast Ethernet, przeplywnosc 100 Mbit/s " << endl;
	cout << "Korzysta z dwóch par okablowania   " << endl;
	cout << "Jedna para transmituje dane " << endl;
	cout << "Druga para odbiera dane " << endl;
	cout << "Maksymalna dlugosc: 100 m " << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 100BaseTX ";
		lista.push_back(nazwa);
	}

}

void Proj_log_Ethernt::tech_ethernet_1000BaseCX(int &klastry)
{
	cout << "Gigabit Ethernet, przeplywnosc 1000 Gbit/s  " << endl;
	cout << "Dane przesylane kablem 150 Ohm " << endl;
	cout << "Maksymalna dlugosc 25 m " << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 1000BaseCX ";
		lista.push_back(nazwa);
	}
}

void Proj_log_Ethernt::tech_ethernet_1000BaseLX(int &klastry)
{
	cout << "Gigabit Ethernet, przeplywnosc 1000 Gbit/s  " << endl;
	cout << "Przesylanie danych kablem swiatlowodowym " << endl;
	cout << "Do przesylania wykorzystuje sie krotkie fale " << endl;
	cout << "Maksymalna dlugosc przesylania: 550 m" << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac ta technologie ? [t/n] " << endl;
	cin >> odpowiedz_eth;

	if (odpowiedz_eth == 't' || odpowiedz_eth == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " 1000BaseLX ";
		lista.push_back(nazwa);
	}
}

void Proj_log_Ethernt::tech_token_ring(int &klastry)
{
	cout << "*******************************************" << endl;
	cout << "Siec o topologii pierscienia " << endl;
	cout << "Moze wspolpracowac z innymi standardami np. Ethernet " << endl;
	cout << "Predkosc transmisji - do 128 Mb/s " << endl;
	cout << "Zaleta: brak kolizji " << endl;
	cout << "Stosowane kable: skretka UTP, kable telefoniczne " << endl;
	cout << "Zlacza: RJ-45, RJ-11 " << endl;
	cout << "Max. liczba wezlow: 96 " << endl;
	cout << "Max. odleglosc miedzy wezlami: 120 m " << endl;
	cout << "*****************************************************" << endl;
	cout << "*****************************************************" << endl;
	cout << "Czy chcesz wykorzystac powyzsza technologie ??? [t/n] " << endl;
	cin >> odpowiedz_ring;

	if (odpowiedz_ring == 't' || odpowiedz_ring == 'T')
	{
		// wpisz do tablicy ze wybrano ta technologie dla pierwszego segmentu, zwroc ilosc pozostalych segmentow
		nazwa = " Token Ring ";
		lista.push_back(nazwa);
	}
}

void Proj_log_Ethernt::wyswietl_lista(int &klastry)
{
	ofstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);

	system ("CLS");
	cout << " ZAWARTOSC LISTY: " << endl;
	cout << "------------------------------" << endl;

	cout << lista.size() << endl;


	if (lista.size() < klastry)
	{

		for (list<string>::iterator i=lista.begin(); i!=lista.end(); i++)
		{

			cout  << *i << endl;
		}

	}

	else if (lista.size() >= klastry)
	{

		cout << "Lista pelna, nie mozna juz dodawac elementow " << endl; 
		for (list<string>::iterator i=lista.begin(); i!=lista.end(); i++)
		{

			plik << "Klaster: " << *i << endl; 
		}	
	}

	cout << endl;
	cout << "------------------------------" << endl;
	plik.close();
}
