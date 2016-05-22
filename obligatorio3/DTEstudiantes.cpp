/*
 * DTEstudiantes.cpp
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#include "DTEstudiantes.h"

namespace std {

DTEstudiantes::DTEstudiantes() {
	this->apellidoEst = "";
	this->cedulaEst = "";
	this->creditosObtenidos = 0;
	this->fechaNacEst = Date();
	this->nombreEst ="";
	this->telefonoEst= "";
	// TODO Apéndice de constructor generado automáticamente

}

DTEstudiantes::~DTEstudiantes() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& DTEstudiantes::getApellidoEst() const {
	return apellidoEst;
}

const string& DTEstudiantes::getCedulaEst() const {
	return cedulaEst;
}

int DTEstudiantes::getCreditosObtenidos() const {
	return creditosObtenidos;
}

const Date& DTEstudiantes::getFechaNacEst() const {
	return fechaNacEst;
}

const string& DTEstudiantes::getNombreEst() const {
	return nombreEst;
}

const string& DTEstudiantes::getTelefonoEst() const {
	return telefonoEst;
}

} /* namespace std */
