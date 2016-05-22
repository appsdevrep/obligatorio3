/*
 * DTSucursal.cpp
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#include "DTSucursal.h"

namespace std {

DTSucursal::DTSucursal() {
	this->direccion="";
	this->nombreSuc="";
	this->telefono ="";
	// TODO Apéndice de constructor generado automáticamente

}

DTSucursal::~DTSucursal() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

const string& DTSucursal::getDireccion() const {
	return direccion;
}

const string& DTSucursal::getNombreSuc() const {
	return nombreSuc;
}

const string& DTSucursal::getTelefono() const {
	return telefono;
}

} /* namespace std */
