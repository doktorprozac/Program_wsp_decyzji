#pragma once
#include "naglowki.h"
#include "Wymagania1.h"
#include "Proj_log_Ethernt.h"


class Wymagania1;
class Projekt_logiczny
{
	int a,i, odpowiedz[5] ,pomieszczenia, il_segmentow, suma, klastry, wynik, odpowiedz_wybor_klasy;
	char poprawna_adresacja, odpowiedz_klasa_adresacji, odpowiedz_zarzadzanie_siecia;
	
	list <string> lista_programow_zarzadzanie_sieci;
	string nazwa_programu;

public:
	Projekt_logiczny(void);
	~Projekt_logiczny(void);

	int ilosc_pomieszczen();
	int segmenty ();
	void segmentacja_sieci(int liczba[9], int rozmiar);
	void sumuj (int tab[]);
	friend class Wymagania1;
	int *moja_tablica;
	void klasa_adresacji (string nazwa);
	void lista_protokolow_sieci();
	void lista_wybranych_programow_do_zarzadzania_sieci (int ilosc_programow);
	void czy_wybrac_dany_program_do_zarzadzania_sieci (string nazwa_programu);
	void wysrodkowanie_napisu(char *napis);
};

