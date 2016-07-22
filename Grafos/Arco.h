#pragma once
#include "stdafx.h"

class Arco
{
private:
	int costo;
	int distancia;

public:
	Arco();
	Arco(int, int);
	~Arco();

	int getCosto();
	void setCosto(int);

	int getDistancia();
	void setDistancia(int);
};

