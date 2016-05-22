/*
 * Seccion.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#include "Seccion.h"

namespace std {

Seccion::Seccion() {
	// TODO Apéndice de constructor generado automáticamente

}

Seccion::~Seccion() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& Seccion::getEncargado() const {
	return encargado;
}

void Seccion::setEncargado(const string& encargado) {
	this->encargado = encargado;
}

const string& Seccion::getInterno() const {
	return interno;
}

void Seccion::setInterno(const string& interno) {
	this->interno = interno;
}

const string& Seccion::getNombreSeccion() const {
	return nombreSeccion;
}

void Seccion::setNombreSeccion(const string& nombreSeccion) {
	this->nombreSeccion = nombreSeccion;
}

} /* namespace std */
