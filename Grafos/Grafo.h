#pragma once
#include "stdafx.h"
#include "Arco.h"
#include "Nodo.h"
#include <exception>

class Grafo
{
private:
	Nodo* vertices[MAX_NODOS];
	Arco* costos[MAX_NODOS][MAX_NODOS];
	int visitados[MAX_NODOS];

	int buscarIndice(int);
	Nodo* buscar(int);
public:
	Grafo();
	~Grafo();

	// origen, destino, costo, distancia
	bool insertarArco(int, int, int, int);
	void insertarVertice(int);
	
	// x1, y1, x2, y2, costo
	void setCosto(int, int, int, int, int);
	void dibujar();
};

