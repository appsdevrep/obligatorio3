/*
 * DTOfertas.cpp
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#include "DTOfertas.h"

namespace std {

DTOfertas::DTOfertas() {
	this->cantPuestos= 0;
	this->descripcion ="";
	this->fechaFinLlamado = Date();
	this->fechaInicioLlamado= Date();
	this->nroExpediente="";
	this->salarioMax= 0;
	this->salarioMin = 0;
	this->titulo ="";
	// TODO Apéndice de constructor generado automáticamente

}

DTOfertas::~DTOfertas() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

} /* namespace std */
