#include "Projekt_logiczny.h"
#include "naglowki.h"
#include "Wymagania1.h"

Projekt_logiczny::Projekt_logiczny(void)
{
}


Projekt_logiczny::~Projekt_logiczny(void)
{
}

int *moja_tablica;
Wymagania1 *obj = new Wymagania1;

Projekt_logiczny obj1;

Proj_log_Ethernt *wsk5 = new Proj_log_Ethernt;
Proj_log_FastEthernet *wsk6 = new Proj_log_FastEthernet;

void Projekt_logiczny::segmentacja_sieci(int liczba[], int rozmiar)
{
		

		int odpowiedz;
		
		do
		{

		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << "ETAP DRUGI, PROJEKT LOGICZNY SIECI: " << endl;
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << endl;
		cout << "[1] Wskazanie lacznej liczby pomieszczen " << endl;
		cout << "[2] Segmentacja sieci " << endl;
		cout << "[3] Wskazanie technologii dla ka¿dego segmentu " << endl;
		cout << "[4] Przedstawienie topologii sieci " << endl;
		cout << "[5] Propozycja adresacji sieci " << endl;
		cout << "[6] Zaproponowanie tablicy routingu " << endl;
		cout << "[7] Lista protokolow niezbednych do ich realizacji " << endl;
		cout << "[8] Alokacja serwerów w topologii " << endl;
		cout << "[9] Rozmieszczenie scian ogniowych " << endl;
		cout << "[10] Zarz¹dzanie siecia " << endl;
		cout << "[11] Powrot do poprzedniego etapu " << endl;

		cout << endl;
		cout << "Wybierz numer albo 1 albo 10: " << endl;
		cin >> odpowiedz;

		
			if (odpowiedz != 1 )
			{
			cout << "obecnie nie dostepne" << endl;
			Sleep(3000);
			system("CLS");
			cout << endl;
			}
	

		
		switch (odpowiedz)
		{
			

		case 1:
			cout << "*************************************************************" << endl;
			cout << "Wskazanie lacznej liczby pomieszczen " << endl;
			cout << "*************************************************************" << endl;
			ilosc_pomieszczen();
				goto two;
			
		
		case 2:
			two:
			cout << "ilosc wybranych pomieszczen: " << pomieszczenia << endl;

			suma = 0;
			i = 0;
			moja_tablica = obj->odczyt_z_pliku();
				do
				{
					cout << moja_tablica[i] << endl;
					suma = suma + moja_tablica[i];
					i++;
					
				}
				while (i<9);

				cout << "suma wszystkich elementow sieci: " << suma << endl;

				segmenty();
				goto three;

			Sleep(5000);
			break;
		case 3:
			three:
			cout << "*************************************************************" << endl;
			cout << "*************************************************************" << endl;
			cout << "Dostepne technologie: " << endl;
			cout << "[1] Ethernet " << endl;
			cout << "[2] Token-Ring " << endl;
			cout << "[3] FDDI - Fiber Distributed Data Interface " << endl;
			cout << "[4] Powrot " << endl;

			cout << "Podaj numer technologii, ktora chcesz wykorzystac : " << endl;
			cin >> odpowiedz;

			switch (odpowiedz)
			{
			case 1:
				cout << "[1] IEEE 802.3 - przepustowosc 10 Mb/s " << endl;
				cout << "[2] Fast Ethernet 100 Mb/s - przepustowosc 100 Mb/s " << endl;
				cout << "[3] Gigabit Ethernet - przepustowosc 1000 Mb/s " << endl;
				cout << "--------------------------------------------------" << endl;
				cout << "Wybierz rodzaj technologii Ethernet: " << endl;
				cin >> odpowiedz;

				switch (odpowiedz)
				{
				case 1:
					cout << "[1] 10Base2 " << endl;
					cout << "[2] 10BaseFL " << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "Ktory wybierasz: " << endl;
					cin >> odpowiedz;

					switch (odpowiedz)
					{
					case 1:
						wsk5->tech_ethernet_10Base2();
						// dopisac jak jest juz podzielone w ile segmentow, to wypelnic tablice, 1 segment, jaka technologia itd. 
						break;

					case 2:
						wsk5->tech_ethernet_10BaseFL();
						// 
						break;

					default:
						cout << "Brak opcji " << endl;
							break;

					}

					break;
				case 2:
					cout << "[1] 100BaseT " << endl;
					cout << "[2] 100BaseTX " << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "Ktory wybierasz: " << endl;

					switch (odpowiedz)
					{
					case 1:
						wsk6->tech_ethernet_100BaseT();
						// dopisac jak jest juz podzielone w ile segmentow, to wypelnic tablice, 1 segment, jaka technologia itd. 
						break;

					case 2:
						wsk6->tech_ethernet_100BaseTX();
						// 
						break;

					default:
						cout << "Brak opcji " << endl;
							break;

					}



					break;
				case 3:
					break;
				}

				break;
			case 2:

				break;
			case 3:
				break;
			case 4:

				cout << " Wybrano [3] " << endl;
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
				cout << "Opcja nie dostepna " << endl;
				break;
			}

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

		}
		while (true && odpowiedz < 1);
}

int Projekt_logiczny::ilosc_pomieszczen ()
{
	cout << "Podaj laczna liczbe pomieszczen [max 10] " << endl;
	cin >> pomieszczenia;

	while (pomieszczenia < 0 || pomieszczenia > 10 )
	{
		
			cout << " Podana wartosc nie spelnia kryteriow " << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Podaj jeszcze raz: " << endl;
			cout << "-------------------------------------------------" << endl;
			cin >> pomieszczenia;
		
	}
			
	cout << "podano: " << pomieszczenia << " pomieszczen " << endl;
	Sleep(5000);
	system ("CLS");

	return pomieszczenia;
}

int Projekt_logiczny::segmenty()
{
	state:
	cout << "Podaj ilosc klastrow z ktorych ma sie skladac siec: " << endl;
	cin >> klastry;
	while (klastry < 0 || klastry > 9 )
	{
		cout << "Za du¿o klastrow, max 9 " << endl;
		cout << "Podaj ilosc klastrow z ktorych ma sie skladac siec: " << endl;
		cin >> klastry;
	}

	if (suma % 2 == 0 && suma >=6)
	{

		if (suma == 6 && pomieszczenia <= 3 && klastry == 1)
		{
			cout << klastry << " klaster z " << suma << " urzadzen " << endl;
		
			//return klastry;
		}
		else if (suma == 6 && (pomieszczenia > 3 || klastry != 1))
		{
			cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
			Sleep (2000);
			system ("CLS");
			ilosc_pomieszczen();
			goto state;
						
		}

		if (suma % 4 == 0)
		{
			if (suma == 8 && pomieszczenia <=3 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 8 && (pomieszczenia > 3 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 12 && pomieszczenia <=4 && klastry == 3)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 12 && (pomieszczenia > 4 || klastry != 3))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 16 && pomieszczenia <=5 && klastry == 4)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 16 && (pomieszczenia > 5 || klastry != 4))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 20 && pomieszczenia <=6 && klastry == 5)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 20 && (pomieszczenia > 6 || klastry != 5))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}


			if (suma == 24 && pomieszczenia <=7 && klastry == 6)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 24 && (pomieszczenia > 7 || klastry != 6))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 28 && pomieszczenia <=8 && klastry == 7)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 28 && (pomieszczenia > 8 || klastry != 7))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 32 && pomieszczenia <=10 && klastry == 8)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 32 && (pomieszczenia >10 || klastry != 8))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}



		}

		else
		{
			if (suma == 10 && pomieszczenia <=3 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 10 && (pomieszczenia >3 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 14 && pomieszczenia <=3 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 14 && (pomieszczenia >3 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 18 && pomieszczenia <=6 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 18 && (pomieszczenia >6 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 22 && pomieszczenia <=6 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 22 && (pomieszczenia >6 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 26 && pomieszczenia <=6 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 26 && (pomieszczenia >6 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}

			if (suma == 30 && pomieszczenia <=10 && klastry == 2)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
			}
			else if (suma == 30 && (pomieszczenia >10 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
	
				ilosc_pomieszczen();
				goto state;
			}


		}
		}
	else if (suma % 2 == 1 && suma >=6)
	{
		cout << "suma jest nieparzysta" << endl;
		if (suma == 27 && pomieszczenia == 10 && klastry == 9)
		{
			cout << " 9 segmenty po 3 urzadzenia " << endl;
		}
		else if (suma == 27 && (pomieszczenia < 10 || klastry != 9))
		{
			cout << "nieodpowiednia ilosc klastrow, wiecej " << endl;
			Sleep (2000);
			system ("CLS");
			ilosc_pomieszczen();
			goto state;
		}

	
	}


	fstream plik;
	plik.open("\\dane.txt", ios::out | ios::app);
	plik << endl;
	plik << endl;
	plik << "*************************************************************" << endl;
	plik << "*************************************************************" << endl;
	plik << "ETAP DRUGI, PROJEKT LOGICZNY SIECI: " << endl;
	plik << "*************************************************************" << endl;
	plik << "*************************************************************" << endl;
	plik << "Ilosc klastrow: " << klastry << endl;

	return klastry;
}