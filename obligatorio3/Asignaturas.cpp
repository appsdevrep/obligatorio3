/*
 * Asignaturas.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#include "Asignaturas.h"

namespace std {

Asignaturas::Asignaturas() {
	// TODO Apéndice de constructor generado automáticamente

}

Asignaturas::~Asignaturas() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& Asignaturas::getCodAsig() const {
	return codAsig;
}

void Asignaturas::setCodAsig(const string& codAsig) {
	this->codAsig = codAsig;
}

int Asignaturas::getCreditos() const {
	return creditos;
}

void Asignaturas::setCreditos(int creditos) {
	this->creditos = creditos;
}

const string& Asignaturas::getNombreAsig() const {
	return nombreAsig;
}

void Asignaturas::setNombreAsig(const string& nombreAsig) {
	this->nombreAsig = nombreAsig;
}

} /* namespace std */
