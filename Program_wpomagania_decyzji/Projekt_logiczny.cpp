#include "Projekt_logiczny.h"
#include "naglowki.h"
#include "Wymagania1.h"

Projekt_logiczny::Projekt_logiczny(void)
{
}


Projekt_logiczny::~Projekt_logiczny(void)
{
}



void Projekt_logiczny::segmentacja_sieci(int liczba[], int rozmiar)
{
		

		int odpowiedz;
		
		
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << "ETAP DRUGI, PROJEKT LOGICZNY SIECI: " << endl;
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << endl;
		cout << "[1] Rozmieszczenie elementow sieci w budynku " << endl;
		cout << "[2] Wskazanie technologii dla ka¿dego segmentu " << endl;
		cout << "[3] Przedstawienie topologii sieci " << endl;
		cout << "[4] Propozycja adresacji sieci " << endl;
		cout << "[5] Zaproponowanie tablicy routingu " << endl;
		cout << "[6] Lista protokolow niezbednych do ich realizacji " << endl;
		cout << "[7] Alokacja serwerów w topologii " << endl;
		cout << "[8] Rozmieszczenie scian ogniowych " << endl;
		cout << "[9] Zarz¹dzanie siecia " << endl;
		cout << "[10] Powrot do poprzedniego etapu " << endl;

		cout << endl;
		cout << "Czy wrocic do poprzedniego etapu ??? " << endl;
		cout << "Jesli tak wcisnij 10 " << endl;
		cin >> odpowiedz;

		switch (odpowiedz)
		{
		case 1:
		
			
			if (odpowiedz == 1)
			{
				int *moja_tablica;
				Wymagania1 *obj = new Wymagania1;

				moja_tablica = obj->odczyt_z_pliku();

				int i = 0;
				int suma = 0;
				do
				{
					cout << moja_tablica[i] << endl;
					suma = suma + moja_tablica[i];
					i++;
					
				}
				while (i<9);

				cout << "suma wszystkich elementow sieci: " << suma << endl;

				
				if (suma % 2 == 0 && suma >=6)
				{
					cout << "suma jest parzysta" << endl;
					
					if (suma == 6)
					{
						cout << "Jeden klaster z wybranych urzadzen" << endl;
					}

					else if (suma % 4 == 0)
					{
						if (suma == 8)
						{
							cout << " 2 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 12)
						{
							cout << " 3 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 16)
						{
							cout << " 4 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 20)
						{
							cout << " 5 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 24)
						{
							cout << " 6 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 28)
						{
							cout << " 7 klastry po 4 urzadzenia " << endl;
						}
						else if (suma == 32)
						{
							cout << " 8 klastry po 4 urzadzenia " << endl;
						}
					}
					else
					{
						if (suma == 10)
						{
							cout << "2 klastry po 5 urzadzen " << endl;
						}
						else if (suma == 14)
						{
							cout << "2 klastry po 7 urzadzen " << endl;
						}
						else if (suma == 18)
						{
							cout << "2 klastry po 9 urzadzen " << endl;
						}
						else if (suma == 22)
						{
							cout << "2 klastry po 11 urzadzen " << endl;
						}
						else if (suma == 26)
						{
							cout << "2 klastry po 13 urzadzen " << endl;
						}
						else if (suma == 30)
						{
							cout << "2 klastry po 15 urzadzen " << endl;
						}
					}

				}
				else if (suma % 2 == 1 && suma >=6)
				{
					cout << "suma jest nieparzysta" << endl;
					if (suma == 27)
					{
						cout << " 9 segmenty po 3 urzadzenia " << endl;
					}

				}

				
			}

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			do
			{
				boolean x = false;
			if (cin.get() == '\n')
				{
					x;
					system ("CLS");
				}
			}
			while (!true);
			system ("CLS");
			break;

		default:
			cout << "Wybrano inna opcje " << endl;

			break;
		}

		Sleep (5000);


		/*Wymagania1 *w = new Wymagania1();
		w->urzadzenia();*/

		//cout << w->get_liczba() << endl;
		//w.liczba;
		
}
