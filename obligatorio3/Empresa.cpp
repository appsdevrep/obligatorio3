/*
 * Empresa.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#include "Empresa.h"

namespace std {

Empresa::Empresa() {
	// TODO Apéndice de constructor generado automáticamente

}

Empresa::~Empresa() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& Empresa::getNombreEmp() const {
	return nombreEmp;
}

void Empresa::setNombreEmp(const string& nombreEmp) {
	this->nombreEmp = nombreEmp;
}

const string& Empresa::getRut() const {
	return rut;
}

void Empresa::setRut(const string& rut) {
	this->rut = rut;
}

} /* namespace std */
