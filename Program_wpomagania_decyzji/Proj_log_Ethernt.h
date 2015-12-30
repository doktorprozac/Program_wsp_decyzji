#pragma once
#include "naglowki.h"

 

class Proj_log_Ethernt
{
	char odpowiedz_eth, odpowiedz_ring;
	string nazwa;
	list <string> lista_technologii;
public:
	
	Proj_log_Ethernt(void);
	~Proj_log_Ethernt(void);
	void tech_ethernet_10Base2(int &klastry);
	void tech_ethernet_10BaseFL(int &klastry);
	void tech_ethernet_100BaseT(int &klastry);
	void tech_ethernet_100BaseTX(int &klastry);
	void tech_ethernet_1000BaseLX(int &klastry);
	void tech_ethernet_1000BaseCX(int &klastry);
	void tech_token_ring(int &klastry);
	void wyswietl_lista_technologi(int &klastry);
	
};

