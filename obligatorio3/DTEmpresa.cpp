/*
 * DTEmpresa.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#include "DTEmpresa.h"

namespace std {

DTEmpresa::DTEmpresa() {
	this->nombreEmp = "Mi Empresa";
	this->rut = "121212121212";
	// TODO Apéndice de constructor generado automáticamente

}

DTEmpresa::~DTEmpresa() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& DTEmpresa::getNombreEmp() const {
	return nombreEmp;
}

const string& DTEmpresa::getRut() const {
	return rut;
}

} /* namespace std */
