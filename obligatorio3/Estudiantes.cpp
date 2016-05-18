/*
 * Estudiantes.cpp
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#include "Estudiantes.h"

namespace std {

Estudiantes::Estudiantes() {
	this->apellidoEst = "";
	this->nombreEst ="";
	this->cedulaEst = "";
	this->telefonoEst = "";
	this->fechaNacEst = Date();
	// TODO Apéndice de constructor generado automáticamente

}

Estudiantes::~Estudiantes() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& Estudiantes::getApellidoEst() const {
	return apellidoEst;
}

void Estudiantes::setApellidoEst(const string& apellidoEst) {
	this->apellidoEst = apellidoEst;
}

const string& Estudiantes::getCedulaEst() const {
	return cedulaEst;
}

void Estudiantes::setCedulaEst(const string& cedulaEst) {
	this->cedulaEst = cedulaEst;
}

const Date& Estudiantes::getFechaNacEst() const {
	return fechaNacEst;
}

void Estudiantes::setFechaNacEst(const Date& fechaNacEst) {
	this->fechaNacEst = fechaNacEst;
}

const string& Estudiantes::getNombreEst() const {
	return nombreEst;
}

void Estudiantes::setNombreEst(const string& nombreEst) {
	this->nombreEst = nombreEst;
}

const string& Estudiantes::getTelefonoEst() const {
	return telefonoEst;
}

void Estudiantes::setTelefonoEst(const string& telefonoEst) {
	this->telefonoEst = telefonoEst;
}

} /* namespace std */
