/*
 * OfertaLaboral.cpp
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#include "OfertaLaboral.h"

namespace std {

OfertaLaboral::OfertaLaboral() {
	this->nroExpediente = "";
	this->titulo = "";
	this->descripcion ="";
	this->salarioMax= 0;
	this->salarioMin = 0;
	this->cantPuestos = 0;
	this->fechaInicioLlamado = Date();
	this->fechaFinLlamado = Date();
	// TODO Apéndice de constructor generado automáticamente

}

OfertaLaboral::~OfertaLaboral() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

int OfertaLaboral::getCantPuestos() const {
	return cantPuestos;
}

void OfertaLaboral::setCantPuestos(int cantPuestos) {
	this->cantPuestos = cantPuestos;
}

const string& OfertaLaboral::getDescripcion() const {
	return descripcion;
}

void OfertaLaboral::setDescripcion(const string& descripcion) {
	this->descripcion = descripcion;
}

const Date& OfertaLaboral::getFechaFinLlamado() const {
	return fechaFinLlamado;
}

void OfertaLaboral::setFechaFinLlamado(const Date& fechaFinLlamado) {
	this->fechaFinLlamado = fechaFinLlamado;
}

const Date& OfertaLaboral::getFechaInicioLlamado() const {
	return fechaInicioLlamado;
}

void OfertaLaboral::setFechaInicioLlamado(const Date& fechaInicioLlamado) {
	this->fechaInicioLlamado = fechaInicioLlamado;
}

const string& OfertaLaboral::getNroExpediente() const {
	return nroExpediente;
}

void OfertaLaboral::setNroExpediente(const string& nroExpediente) {
	this->nroExpediente = nroExpediente;
}

int OfertaLaboral::getSalarioMax() const {
	return salarioMax;
}

void OfertaLaboral::setSalarioMax(int salarioMax) {
	this->salarioMax = salarioMax;
}

int OfertaLaboral::getSalarioMin() const {
	return salarioMin;
}

void OfertaLaboral::setSalarioMin(int salarioMin) {
	this->salarioMin = salarioMin;
}

const string& OfertaLaboral::getTitulo() const {
	return titulo;
}

void OfertaLaboral::setTitulo(const string& titulo) {
	this->titulo = titulo;
}

} /* namespace std */
