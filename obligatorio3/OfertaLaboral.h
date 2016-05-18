/*
 * OfertaLaboral.h
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#ifndef OFERTALABORAL_H_
#define OFERTALABORAL_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class OfertaLaboral {
public:
	OfertaLaboral();
	virtual ~OfertaLaboral();
	int getCantPuestos() const;
	void setCantPuestos(int cantPuestos);
	const string& getDescripcion() const;
	void setDescripcion(const string& descripcion);
	const Date& getFechaFinLlamado() const;
	void setFechaFinLlamado(const Date& fechaFinLlamado);
	const Date& getFechaInicioLlamado() const;
	void setFechaInicioLlamado(const Date& fechaInicioLlamado);
	const string& getNroExpediente() const;
	void setNroExpediente(const string& nroExpediente);
	int getSalarioMax() const;
	void setSalarioMax(int salarioMax);
	int getSalarioMin() const;
	void setSalarioMin(int salarioMin);
	const string& getTitulo() const;
	void setTitulo(const string& titulo);

private:
	string nroExpediente;
	string titulo;
	string descripcion;
	int salarioMax;
	int salarioMin;
	int cantPuestos;
	Date fechaInicioLlamado;
	Date fechaFinLlamado;
};

} /* namespace std */

#endif /* OFERTALABORAL_H_ */
