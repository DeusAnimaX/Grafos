#pragma once
#include "stdafx.h"

class InfoNodo
{
private:
	int elemento;
	bool visitado;
	int posx;
	int posy;

public:
	InfoNodo();
	~InfoNodo();

	int getElemento();
	void setElemento(int);

	bool isVisistado();
	void setVisitado(bool);

	int getPosX();
	void setPosX(int);

	int getPosY();
	void setPosY(int);
};

