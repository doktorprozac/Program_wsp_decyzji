#pragma once
#include "naglowki.h"
#include "Wymagania1.h"
#include "Proj_log_Ethernt.h"
#include "Projekt_fizyczny.h"


class Wymagania1;
class Projekt_logiczny
{
	int a,i, odpowiedz[5] ,pomieszczenia, suma, klastry, wynik, odpowiedz_wybor_klasy, wybierz_programy_zarzadzajace_siecia;
	int ilosc_segmentow, usun_liste;
	char poprawna_adresacja, odpowiedz_klasa_adresacji, odpowiedz_zarzadzanie_siecia;
	
	list <string> lista_programow_zarzadzanie_sieci;
	string nazwa_programu;

	friend class Proj_log_Ethernt;
	friend class Projekt_fizyczny;
public:
	Projekt_logiczny(void);
	~Projekt_logiczny(void);

	int ilosc_pomieszczen();
	int segmenty ();
	void segmentacja_sieci(int liczba[], int rozmiar);
	//void sumuj (int tab[]);
	friend class Wymagania1;
	
	int *moja_tablica;
	void klasa_adresacji (string nazwa);
	void lista_protokolow_sieci();
	void lista_wybranych_programow_do_zarzadzania_sieci (int ilosc_programow, int ilosc_segmentow);
	void czy_wybrac_dany_program_do_zarzadzania_sieci (string nazwa_programu);
	void wysrodkowanie_napisu(char *napis);
	void powrot_do_poprzedniego_etapu();
};

