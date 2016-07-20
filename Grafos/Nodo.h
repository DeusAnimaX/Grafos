#pragma once
#include "stdafx.h"

class Nodo
{
private:
	int elemento;
	bool visitado; // enum?
	int posx;
	int posy;

public:
	Nodo();
	Nodo(int);
	~Nodo();

	int getElemento();
	void setElemento(int);

	bool isVisistado();
	void setVisitado(bool);

	int getPosX();
	void setPosX(int);

	int getPosY();
	void setPosY(int);
};

