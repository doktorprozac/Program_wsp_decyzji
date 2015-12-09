#include "Proj_log_FastEthernet.h"
#include "naglowki.h"

Proj_log_FastEthernet::Proj_log_FastEthernet(void)
{
}


Proj_log_FastEthernet::~Proj_log_FastEthernet(void)
{
}

void Proj_log_FastEthernet::tech_ethernet_100BaseT()
{
	cout << " Przeplywnosc 100 Mbit/s w topologi gwiazdy  " << endl;
	cout << " Realizowane za pomoca ekranowej skretki symetrycznej " << endl;
	cout << " lub swiatolowodow wielomodowych" << endl;
	cout << " Wymaga odpowiedniej synchronizacji czasowej " << endl;
	cout << " Maksymalny zasieg: 100 metrow " << endl;
}

void Proj_log_FastEthernet::tech_ethernet_100BaseTX()
{
	cout << " Korzysta z dwoch par okablowania UTP lub STP " << endl;
	cout << " Jedna para transmituje dane. " << endl;
	cout << " druga para odbiera " << endl;
	cout << " Maksymalna dlugosc segmentu: 100 m " << endl;
}