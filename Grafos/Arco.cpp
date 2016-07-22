#include "Arco.h"

Arco::Arco()
{
	setCosto(0);
	setDistancia(0);
}

Arco::Arco(int costo, int distancia)
{
	setCosto(costo);
	setDistancia(distancia);
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
	return this->distancia;
}

void Arco::setDistancia(int distancia) {
	this->distancia = distancia;
}