#pragma once
#include "stdafx.h"

class Arco
{
private:
	int costo;
	int distacia;

public:
	Arco();
	~Arco();

	int getCosto();
	void setCosto(int);

	int getDistancia();
	void setDistancia(int);
};

