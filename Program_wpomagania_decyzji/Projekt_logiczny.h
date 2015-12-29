#pragma once
#include "Wymagania1.h"
#include "Proj_log_Ethernt.h"


class Wymagania1;
class Projekt_logiczny
{
	int i, odpowiedz[5] ,pomieszczenia, il_segmentow, suma, klastry, wynik, odpowiedz_wybor_klasy;
	char poprawna_adresacja, odpowiedz_klasa_adresacji;

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
	
	
};

