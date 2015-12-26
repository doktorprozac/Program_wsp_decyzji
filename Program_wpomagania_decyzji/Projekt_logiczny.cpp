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

void Projekt_logiczny::segmentacja_sieci(int liczba[], int rozmiar)
{

	do
	{

		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << "ETAP DRUGI, PROJEKT LOGICZNY SIECI: " << endl;
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << endl;
		cout << "[1] Wskazanie lacznej liczby pomieszczen oraz klastrow " << endl;
		cout << "[2] Wskazanie technologii (standardow) dla kazdego segmentu " << endl;
		cout << "[3] Propozycja adresacji sieci " << endl;
		cout << "[4] Zaproponowanie tablicy routingu " << endl;
		cout << "[5] Lista protokolow niezbednych do realizacji sieci " << endl;
		cout << "[6] Alokacja serwerow w topologii logicznej " << endl;
		cout << "[7] Plan bezpieczenstwa sieci " << endl;
		cout << "[8] Plan zarz¹dzania siecia " << endl;
		cout << "[9] Powrot do poprzedniego etapu " << endl;
		cout << endl;
		cout << "Podaj liczbe: " << endl;
		cin >> odpowiedz[0];


		switch (odpowiedz[0])
		{


		case 1:
			cout << "*************************************************************" << endl;
			cout << "Wskazanie lacznej liczby pomieszczen " << endl;
			cout << "*************************************************************" << endl;
			ilosc_pomieszczen();

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



			Sleep(5000);
			break;
		case 2:


			cout << "*************************************************************" << endl;
			cout << "*************************************************************" << endl;
			cout << "Dostepne technologie: " << endl;
			cout << "[1] Ethernet " << endl;
			cout << "[2] Token-Ring " << endl;
			cout << "[3] Powrot " << endl;

			cout << "Podaj numer technologii, ktora chcesz wykorzystac : " << endl;
			cin >> odpowiedz[1];

			switch (odpowiedz[1])
			{
			case 1:
				cout << "[1] IEEE 802.3 - przepustowosc 10 Mb/s " << endl;
				cout << "[2] Fast Ethernet 100 Mb/s - przepustowosc 100 Mb/s " << endl;
				cout << "[3] Gigabit Ethernet - przepustowosc 1000 Mb/s " << endl;
				cout << "[4] Powrot " << endl;
				cout << "--------------------------------------------------" << endl;
				cout << "Wybierz rodzaj technologii Ethernet: " << endl;
				cin >> odpowiedz[2];

				switch (odpowiedz[2])
				{
				case 1:
					cout << "[1] 10Base2 " << endl;
					cout << "[2] 10BaseFL " << endl;
					cout << "[3] Powrot " << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "Ktory wybierasz: " << endl;
					cin >> odpowiedz[3];

					switch (odpowiedz[3])
					{
					case 1:
						wsk5->tech_ethernet_10Base2(klastry);
						// dopisac jak jest juz podzielone w ile segmentow, to wypelnic tablice, 1 segment, jaka technologia itd.
						wsk5->wyswietl_lista(klastry);

						break;

					case 2:
						wsk5->tech_ethernet_10BaseFL(klastry);
						wsk5->wyswietl_lista(klastry);
						// 
						break;
					case 3:
						cout << " Wybrano [3] " << endl;

						do
						{
							boolean x = false;

							if (cin.get() == '\n')
							{
								x;
								system ("CLS");
							}
							system ("CLS");
						}
						while (false);
						system ("CLS");

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
					cin >> odpowiedz[4];

					switch (odpowiedz[4])
					{
					case 1:
						wsk5->tech_ethernet_100BaseT(klastry);
						// dopisac jak jest juz podzielone w ile segmentow, to wypelnic tablice, 1 segment, jaka technologia itd. 
						wsk5->wyswietl_lista(klastry);
						break;

					case 2:
						wsk5->tech_ethernet_100BaseTX(klastry);
						wsk5->wyswietl_lista(klastry); 
						break;

					default:
						cout << "Brak opcji " << endl;
						break;

					}

					break;
				case 3:
					cout << "[1] 1000BaseLX " << endl;
					cout << "[2] 1000BaseCX " << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "Ktory wybierasz: " << endl;

					cin >> odpowiedz[5];

					switch (odpowiedz[5])
					{
					case 1:
						wsk5->tech_ethernet_1000BaseLX(klastry);
						// dopisac jak jest juz podzielone w ile segmentow, to wypelnic tablice, 1 segment, jaka technologia itd. 
						wsk5->wyswietl_lista(klastry);
						break;

					case 2:
						wsk5->tech_ethernet_1000BaseCX(klastry);
						wsk5->wyswietl_lista(klastry);
						break;

					default:
						cout << "Brak opcji " << endl;
						break;

					}
					break;
				}

				break;

			case 2:

				wsk5->tech_token_ring(klastry);
				wsk5->wyswietl_lista(klastry);

				break;
			case 3:
				cout << " Wybrano [3] " << endl;
				Sleep (2000);
				system ("CLS");
				return;
				break;

			default:
				cout << "Opcja nie dostepna " << endl;
				break;
			}

			break;

		case 3:
			cout << "Propozycja adresacji sieci " << endl;
			cout << "" << endl;


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
			cout << " Wybrano [9] " << endl;
			Sleep (2000);
			system ("CLS");
			return;
			break;

		default:
			cout << "Wybrano inna opcje " << endl;

			break;
		}

	}
	while (true);
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
	
	for ( ;;)
	{

		cout << "Podaj ilosc klastrow z ktorych ma sie skladac siec: " << endl;
		cin >> klastry;
		while (klastry < 0 || klastry > 9 )
		{
			cout << "Za du¿o klastrow, max 9 " << endl;
			cout << "Podaj ilosc klastrow z ktorych ma sie skladac siec: " << endl;
			cin >> klastry;
		}
		if (suma < 6)
		{
			cout << "nie da sie utworzyc klastrow" << endl;
			continue;
		}

		if (suma % 2 == 0 && suma >=6)
		{

			if (suma == 6 && pomieszczenia <= 3 && klastry == 1)
			{
				cout << klastry << " klaster z " << suma << " urzadzen " << endl;
				break;
			}
			else if (suma == 6 && pomieszczenia <= 3 && klastry == 2)
			{
				cout << klastry << " klaster z " << suma << " urzadzen " << endl;
				break;
			}
			else if (suma == 6 && (pomieszczenia > 3 || klastry != 1 || klastry != 2))
			{
				cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
				Sleep (2000);
				system ("CLS");
				ilosc_pomieszczen();
				continue;
			}

			if (suma % 4 == 0)
			{
				if (suma == 8 && pomieszczenia <=3 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 8 && (pomieszczenia > 3 || klastry != 2))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 12 && pomieszczenia <=4 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 12 && pomieszczenia <=4 && klastry == 3)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 12 && pomieszczenia <=4 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 12 && (pomieszczenia > 4 || klastry != 2 || klastry != 3 || klastry != 4))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 16 && pomieszczenia >=2 && pomieszczenia <=4 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 16 && pomieszczenia >=4 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 16 && (pomieszczenia < 5 || klastry != 2 || klastry != 4))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 20 && pomieszczenia >=5 && klastry == 5)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 20 && pomieszczenia >=4 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 20 && (pomieszczenia < 4 || klastry != 5 || klastry != 4))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");

					ilosc_pomieszczen();
					continue;
				}


				if (suma == 24 && pomieszczenia >=7 && klastry == 6)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 24 && pomieszczenia <=5 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}


				else if (suma == 24 && (pomieszczenia < 5 || klastry != 6 || klastry != 4))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 28 &&  pomieszczenia >=7 && klastry == 7)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 28 && pomieszczenia >=4 && pomieszczenia <=8 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 28 && (pomieszczenia < 4 || klastry != 7 || klastry != 4))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 32 && pomieszczenia >=8 && klastry == 8)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 32 && pomieszczenia >=2 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
				}

				else if (suma == 32 && pomieszczenia >=4 && klastry == 4)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 32 && (pomieszczenia <2 || klastry != 8 || klastry != 4 || klastry != 2 ))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

			}

			else
			{
				if (suma == 10 && pomieszczenia <=3 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 10 && (pomieszczenia >3 || klastry != 2))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 14 && pomieszczenia <=3 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 14 && (pomieszczenia >3 || klastry != 2))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 18 && pomieszczenia <=6 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 18 && pomieszczenia <=6 && klastry == 3)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 18 && pomieszczenia <=6 && klastry == 6)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}

				else if (suma == 18 && (pomieszczenia >6 || klastry != 2 || klastry != 3 || klastry != 6))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 22 && pomieszczenia <=6 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 22 && (pomieszczenia >6 || klastry != 2))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 26 && pomieszczenia <=6 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 26 && (pomieszczenia >6 || klastry != 2))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}

				if (suma == 30 && pomieszczenia >=2 && pomieszczenia <=10 && klastry == 2)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 30 && pomieszczenia >=3 && pomieszczenia <=10 && klastry == 3)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 30  && pomieszczenia >=5 && pomieszczenia <=10 && klastry == 5)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}
				else if (suma == 30  && pomieszczenia >=6 && pomieszczenia <=10 && klastry == 6)
				{
					cout << klastry << " klastry z " << suma << " urzadzen " << endl;
					break;
				}


				else if (suma == 30 && (pomieszczenia >10 || klastry != 2 || klastry != 3 || klastry != 5 || klastry != 6))
				{
					cout << " Za duzo pomieszczen albo klastrow, wprowadz dane jeszcze raz " << endl;
					Sleep (2000);
					system ("CLS");
					ilosc_pomieszczen();
					continue;
				}


			}
		}
		else if (suma % 2 == 1 && suma >=6)
		{
			cout << "Utworzono: " << endl;
			if (suma == 27 && pomieszczenia >= 9 && klastry == 9)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
				break;
			}
			else if (suma == 27 && (pomieszczenia < 8 || klastry != 9))
			{
				cout << "nieodpowiednia ilosc klastrow, wiecej " << endl;
				Sleep (2000);
				system ("CLS");
				ilosc_pomieszczen();
				continue;
			}
			if (suma == 25 && pomieszczenia >=5  && klastry == 5)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
				break;
			}
			else if (suma == 25 && (pomieszczenia < 5 || klastry != 5))
			{
				cout << "nieodpowiednia ilosc klastrow lub pomieszczen " << endl;
				Sleep (2000);
				system ("CLS");
				ilosc_pomieszczen();
				continue;
			}

			if (suma == 33 && pomieszczenia >=3  && klastry == 3)
			{
				cout << klastry << " klastry z " << suma << " urzadzen " << endl;
				break;
			}
			else if (suma == 33 && (pomieszczenia < 3 || klastry != 3))
			{
				cout << "nieodpowiednia ilosc klastrow lub pomieszczen " << endl;
				Sleep (2000);
				system ("CLS");
				ilosc_pomieszczen();
				continue;
			}

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
		plik << "Ilosc pomieszczen: " << pomieszczenia << endl;
		plik << "Ilosc klastrow: " << klastry << endl;
		plik << "Technologia dla poszczegolnych klastrow: " << endl;
		plik.close();

	return klastry;
}