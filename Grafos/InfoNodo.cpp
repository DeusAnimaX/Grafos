#include "InfoNodo.h"

InfoNodo::InfoNodo()
{
}

InfoNodo::~InfoNodo()
{
}

int InfoNodo::getElemento() {
	return this->elemento;
}

void InfoNodo::setElemento(int elemento) {
	this->elemento = elemento;
}

bool InfoNodo::isVisistado() {
	return this->visitado;
}

void InfoNodo::setVisitado(bool visitado) {
	this->visitado = visitado;
}

int InfoNodo::getPosX() {
	return this->posx;
}

void InfoNodo::setPosX(int posx) {
	this->posx = posx;
}

int InfoNodo::getPosY() {
	return this->posy;
}

void InfoNodo::setPosY(int posy) {
	this->posy = posy;
}