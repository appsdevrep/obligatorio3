/*
 * Sucursal.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#include "Sucursal.h"

namespace std {

Sucursal::Sucursal() {
	// TODO Apéndice de constructor generado automáticamente

}

Sucursal::~Sucursal() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& Sucursal::getDireccion() const {
	return direccion;
}

void Sucursal::setDireccion(const string& direccion) {
	this->direccion = direccion;
}

const string& Sucursal::getNombreSuc() const {
	return nombreSuc;
}

void Sucursal::setNombreSuc(const string& nombreSuc) {
	this->nombreSuc = nombreSuc;
}

const string& Sucursal::getTelefonoSuc() const {
	return telefonoSuc;
}

void Sucursal::setTelefonoSuc(const string& telefonoSuc) {
	this->telefonoSuc = telefonoSuc;
}

} /* namespace std */
