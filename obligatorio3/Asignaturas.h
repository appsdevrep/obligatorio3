/*
 * Asignaturas.h
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#ifndef ASIGNATURAS_H_
#define ASIGNATURAS_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class Asignaturas {
public:
	Asignaturas();
	virtual ~Asignaturas();
	const string& getCodAsig() const;
	void setCodAsig(const string& codAsig);
	int getCreditos() const;
	void setCreditos(int creditos);
	const string& getNombreAsig() const;
	void setNombreAsig(const string& nombreAsig);

private:
	string codAsig;
	string nombreAsig;
	int creditos;
};

} /* namespace std */

#endif /* ASIGNATURAS_H_ */
