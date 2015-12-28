#include "naglowki.h"


class info
{	
public:


	int tutorial ()
	{
		static char autor [30] = "Kacper Igras"; 

		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << " SYSTEM WSPOMAGAJACY PROJEKTOWANIE SIECI KOMPUTEROWYCH " << endl;
		cout << "*************************************************************" << endl;
		cout << "*************************************************************" << endl;
		cout << endl;
		cout << " O programie: " << endl;
		cout << endl;
		cout << "Program ma za zadanie ulatwic potencjalnemu uzytkownikowi " << endl;
		cout <<	" zaprojektowac siec " << endl;
		cout << "Na ka¿dym etapie projektowania sieci, u¿ytkownik odpowiada na postawione mu pytania " << endl;
		cout << endl;
		cout << "Program podzielony jest na cztery moduly: " << endl;
		cout << endl;
		cout << "[1] Zebranie wymagan co do sieci " << endl;
		cout << "[2] Projekt logiczny sieci " << endl;
		cout << "[3] Projekt fizyczny sieci " << endl;
		cout << "[4] Dodatki - przewidywalny koszt i harmonogram " << endl;
		cout << endl;

		cout << "Implementacja: " << autor << endl;
		cout << endl;


		cout << " Wcisnij ENTER aby wyjsc " << endl;
		cin.get();
		return 0;

	}

	int odczytaj_plik_z_danymi(string name)
	{
		string linia;
		ifstream plik(name);
		if (plik.is_open())
		{
			while (getline(plik,linia))
			{
				cout << linia << endl;
			}
			plik.close();
		}
		else
		{
			cout << "Plik nie zostal otworzony :( " << endl; 
		}
		return 0;
	}
};
