#include "Grafo.h"

Grafo::Grafo()
{
	memset(&vertices[0], NULL, sizeof(vertices));
	memset(&costos[0][0], NULL, sizeof(costos));
}

Grafo::~Grafo()
{
}

// Metodos privados
int Grafo::buscarIndice(int elemento) {
	for (int i = 0; i < MAX_NODOS; i++) {
		if (vertices[i] != NULL)
			if (vertices[i]->getElemento() == elemento)
				return i;
	}

	return -1;
}

Nodo* Grafo::buscar(int elemento) {
	for (int i = 0; i < MAX_NODOS; i++) {
		if (vertices[i] != NULL)
			if (vertices[i]->getElemento() == elemento)
				return vertices[i];
	}

	return NULL;
}

// Metodos publicos
bool Grafo::insertarArco(int origen, int destino, int costo, int distancia) {
	int nOrigen = buscarIndice(origen);
	int nDestino = buscarIndice(destino);

	if (nOrigen != -1 && nDestino != -1) {
		Arco* arco = new Arco(costo, distancia);
		costos[nOrigen][nDestino] = arco;

		return true;
	}
	else {
		return false;
	}
}

void Grafo::insertarVertice(int elemento) {
	Nodo* nodo = new Nodo(elemento);

	for (int i = 0; i < MAX_NODOS; i++) {
		if (vertices[i] == NULL) {
			vertices[i] = nodo;
			break;
		}
	}
}

void Grafo::dibujar() {
	for (int i = 0; i < MAX_NODOS; i++) {
		for (int j = 0; j < MAX_NODOS; j++) {
			if (costos[i][j] != NULL) {
				cout << "\nOrigen: " << vertices[i]->getElemento();
				cout << "\nCosto: " << costos[i][j]->getCosto();
				cout << "\nDistancia: " << costos[i][j]->getDistancia();
				cout << "\nDestino: " << vertices[j]->getElemento() << "\n\n";
			}
		}
	}
}