#pragma once
#include "Wymagania1.h"
#include "Proj_log_Ethernt.h"


class Wymagania1;
class Projekt_logiczny
{
	int pomieszczenia, il_segmentow, suma, klastry, wynik;
	int i;
	int odpowiedz[5];
	

public:
	Projekt_logiczny(void);
	~Projekt_logiczny(void);

	int ilosc_pomieszczen();
	int segmenty ();
	void segmentacja_sieci(int liczba[9], int rozmiar);
	void sumuj (int tab[]);
	friend class Wymagania1;
	int *moja_tablica;
	
	
};

