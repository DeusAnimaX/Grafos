#include "Nodo.h"

Nodo::Nodo()
{
	setElemento(NULL);
	setVisitado(false);
	setPosX(0);
	setPosY(0);
}

Nodo::Nodo(int elemento) {
	setElemento(elemento);
	setVisitado(false);
	setPosX(0);
	setPosY(0);
}

Nodo::~Nodo()
{
}

int Nodo::getElemento() {
	return this->elemento;
}

void Nodo::setElemento(int elemento) {
	this->elemento = elemento;
}

bool Nodo::isVisistado() {
	return this->visitado;
}

void Nodo::setVisitado(bool visitado) {
	this->visitado = visitado;
}

int Nodo::getPosX() {
	return this->posx;
}

void Nodo::setPosX(int posx) {
	this->posx = posx;
}

int Nodo::getPosY() {
	return this->posy;
}

void Nodo::setPosY(int posy) {
	this->posy = posy;
}