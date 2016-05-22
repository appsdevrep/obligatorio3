/*
 * Seccion.h
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#ifndef SECCION_H_
#define SECCION_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class Seccion {
public:
	Seccion();
	virtual ~Seccion();
	const string& getEncargado() const;
	void setEncargado(const string& encargado);
	const string& getInterno() const;
	void setInterno(const string& interno);
	const string& getNombreSeccion() const;
	void setNombreSeccion(const string& nombreSeccion);

private:
	string nombreSeccion;
	string interno;
	string encargado;
};

} /* namespace std */

#endif /* SECCION_H_ */
