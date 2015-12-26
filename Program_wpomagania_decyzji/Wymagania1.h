#pragma once
class Wymagania1
{
public:
	Wymagania1(void);

	~Wymagania1(void);

	void tytul();
	int budynek();
	int ilosc_pieter();
	
	int* urzadzenia(int rozmiar);
	int *get_liczba();
	int suma_el();
	void wypelniona_tablica(int liczba[], int rozmiar);
	int* odczyt_z_pliku();

friend class Projekt_logiczny;
//friend void segmentacja_sieci(wymagania &);
private:

int wybor, pietra; 
char odpowiedzz;
int suma;

protected:
	int liczba[9];



};
