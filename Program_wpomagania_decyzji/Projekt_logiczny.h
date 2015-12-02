#pragma once
#include "Wymagania1.h"
class Wymagania1;
class Projekt_logiczny
{
public:
	Projekt_logiczny(void);
	~Projekt_logiczny(void);

	void segmentacja_sieci(int liczba[9], int rozmiar);
	void sumuj (int tab[]);
	friend class Wymagania1;

	
};
