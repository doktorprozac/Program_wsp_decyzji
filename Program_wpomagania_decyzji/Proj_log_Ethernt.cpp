#include "Proj_log_Ethernt.h"
#include "naglowki.h"

Proj_log_Ethernt::Proj_log_Ethernt(void)
{
}


Proj_log_Ethernt::~Proj_log_Ethernt(void)
{
}

void Proj_log_Ethernt::tech_ethernet_10Base2()
{
	cout << " Technologia zwana 'Cienki koncentryk', " << endl;
	cout << " uzywa kabla koncentrycznego o srednicy ok. 5 mm " << endl;
	cout << " Kabel ma biec pomiedzy wszystkimi kartami sieciowymi wpietymi do sieci  " << endl;
	cout << " Karty laczy sie za pomoca trojnika " << endl;
	cout << " Maksymalna dlugosc segmentu: 185 m " << endl;
	cout << " Wada rozwiazania: uszkodzenie kabla w jednym miejscu " << endl;
	cout << " odbiera dostep do calego segmentu " << endl;


}

void Proj_log_Ethernt::tech_ethernet_10BaseFL()
{
	cout << " Pasmo podstawowe 10 Mbps " << endl;
	cout << " Korzysta z kabla swiatlowodowego " << endl;
	cout << " Uzywa sie do laczenia stacji uzytkownikow " << endl;
	cout << " Maksymalna dlugosc segmentu: 1000 m " << endl;
	cout << " Zalety: obojetny na zaklucenia, szumy, warunki atmosferyczne " << endl;
	cout << " Wady: trudnosc w montazu, mala eleastycznosc kabla, drogi " << endl;
}