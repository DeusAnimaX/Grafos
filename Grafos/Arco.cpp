#include "Arco.h"

Arco::Arco()
{
}

Arco::~Arco()
{
}

int Arco::getCosto() {
	return this->costo;
}

void Arco::setCosto(int costo) {
	this->costo = costo;
}

int Arco::getDistancia() {
	return this->distacia;
}

void Arco::setDistancia(int distancia) {
	this->distacia = distacia;
}