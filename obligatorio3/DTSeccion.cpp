/*
 * DTSeccion.cpp
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#include "DTSeccion.h"

namespace std {

DTSeccion::DTSeccion() {
	this->encargado="";
	this->interno="";
	this->nombreSeccion ="";
	// TODO Apéndice de constructor generado automáticamente

}

DTSeccion::~DTSeccion() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& DTSeccion::getEncargado() const {
	return encargado;
}

const string& DTSeccion::getInterno() const {
	return interno;
}

const string& DTSeccion::getNombreSeccion() const {
	return nombreSeccion;
}

} /* namespace std */
