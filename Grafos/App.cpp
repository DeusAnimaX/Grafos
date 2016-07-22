// Grafos.cpp : Defines the entry point for the console application.
//

// Ernesto Mendez
// Emmanual Garcia
// Estructuras de datos 2
// Entrega: 22/07/2016

#include "stdafx.h"
#include "Grafo.h"

Grafo* grafo;

void execOpt(int opt) {
	switch (opt) {
	case 1:
		int elemento;
		cout << "Valor a insertar: ";
		cin >> elemento;
		grafo->insertarVertice(elemento);

		break;
	case 2:
		int origen, destino, costo, distancia;
		cout << "Origen: ";
		cin >> origen;

		cout << "\nDestino: ";
		cin >> destino;

		cout << "\nCosto: ";
		cin >> costo;

		cout << "\nDistancia: ";
		cin >> distancia;

		if (grafo->insertarArco(origen, destino, costo, distancia))
			cout << "\nInsertado con �xito!\n\n";
		else
			cout << "\nNo pudo ser insertado.\n\n";

		break;
	case 3:
		grafo->dibujar();

		break;

	case 4: system("pause");

	default:
		cout << "\nOpcion invalida\n\n";

		break;
	}
}

int main()
{
	grafo = new Grafo();

	int opt = 0;

	do {
		try {
			cout << "1. Insertar vertice\n";
			cout << "2. Insertar arco\n";
			cout << "3. Dibujar\n";
			cout << "4. Salir\n\n";
			cout << "Opcion: ";

			cin >> opt;
			cout << "\n\n------------------\n";
			execOpt(opt);
		}
		catch (exception e) {
			cout << "Error: " << e.what();
		}
	} while (opt != 4);

	return 0;
}
