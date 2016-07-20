#include "Grafo.h"

Grafo::Grafo()
{
}

Grafo::~Grafo()
{
}

// Metodos privados
int Grafo::buscarIndice(int elemento) {
	for (int i = 0; i < MAX_NODOS; i++) {
		if (vertices[i] != NULL && vertices[i]->getElemento() == elemento) {
			return i;
		}
	}

	return NULL;
}

Nodo* Grafo::buscar(int elemento) {
	for (int i = 0; i < MAX_NODOS; i++) {
		if (vertices[i] != NULL && vertices[i]->getElemento() == elemento) {
			return vertices[i];
		}
	}

	return NULL;
}

// Metodos publicos
void Grafo::insertarArco(int origen, int destino, int costo, int distancia) {
	int nOrigen = buscarIndice(origen);
	int nDestino = buscarIndice(destino);

	if (nOrigen != NULL && nDestino != NULL) {
		Arco* arco = new Arco(costo, distancia);
		costos[nOrigen][nDestino] = arco;
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

	throw new exception("Maximo nodos alcanzado");
}

void Grafo::setCosto(int x1, int y1, int x2, int y2, int costo) {

}

void Grafo::dibujar() {

}