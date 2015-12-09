#pragma once
#include "Wymagania1.h"
#include "Proj_log_Ethernt.h"
#include "Proj_log_FastEthernet.h"




class Wymagania1;
class Projekt_logiczny
{
	int pomieszczenia, il_segmentow, i, suma, klastry;
	
public:
	Projekt_logiczny(void);
	~Projekt_logiczny(void);

	int ilosc_pomieszczen();
	int segmenty ();
	void segmentacja_sieci(int liczba[9], int rozmiar);
	void sumuj (int tab[]);
	friend class Wymagania1;

	int (*wsk1)();

	
	
};
