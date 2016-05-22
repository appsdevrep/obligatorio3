/*
 * Sucursal.h
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#ifndef SUCURSAL_H_
#define SUCURSAL_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class Sucursal {
public:
	Sucursal();
	virtual ~Sucursal();
	const string& getDireccion() const;
	void setDireccion(const string& direccion);
	const string& getNombreSuc() const;
	void setNombreSuc(const string& nombreSuc);
	const string& getTelefonoSuc() const;
	void setTelefonoSuc(const string& telefonoSuc);

private:
	string nombreSuc;
	string telefonoSuc;
	string direccion;
};

} /* namespace std */

#endif /* SUCURSAL_H_ */
