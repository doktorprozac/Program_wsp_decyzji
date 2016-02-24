#pragma once
#include "naglowki.h"
#include "Projekt_logiczny.h"

class Projekt_fizyczny
{
	int wybierz_opcje_, odpowiedz_router_switch, ilosc_sementow_sieci, rodzaj_okablowania;
	char odpowiedz_dobor_sprzetu, odpowiedz_wybrany_sprzet, odpowiedz_rodzaj_okablowania, odpowiedzz1;
	list <string> lista_sprzetu_do_zlaczenia_segmentow;
	list <string> lista_okablowania_sieci;
	friend class Projekt_logiczny;

public:
	Projekt_fizyczny(void);
	~Projekt_fizyczny(void);

	void tytul_projekt_fizyczny(int ilosc_segmentow);
	int dobor_sprzetu(int ilosc_segmentow);
	void lista_sprzetu(int ilosc_sprzetu);
	void czy_wybrac_sprzet_laczacy_segmenty(string nazwa_programu);
	void czy_wybrac_sprzet_laczacy_segmenty_2(string nazwa_programu);
	void ilosc_wybranego_sprzetu();
	void wybrane_elementy(int ilosc_segmentow);
	void wybrane_elementy_1(int ilosc_segmentow);
	void topologia_fizyczna_sieci();
	void okablowanie_sieci();
	void czy_wybrac_rodzaj_okablowania(string r_okablowania);
	void lista_wybranego_okablowania(int ilosc);
	
};

