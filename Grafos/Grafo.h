#pragma once
#include "stdafx.h"
#include "Arco.h"
#include "InfoNodo.h"

class Grafo
{
private:
	char vertices[MAX_NODOS];
	Arco costos[MAX_NODOS][MAX_NODOS];
	int visitados[MAX_NODOS];

public:
	Grafo();
	~Grafo();

	// origen, destino, costo, distancia
	void insertarArco(int, int, int, int);
	void insertarVertice(int);
	
	// x1, y1, x2, y2, costo
	void setCosto(int, int, int, int, int);
	void dibujar();
	void getPosicionVertice(int);
};

