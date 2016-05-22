/*
 * Empresa.h
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class Empresa {
public:
	Empresa();
	virtual ~Empresa();
	const string& getNombreEmp() const;
	void setNombreEmp(const string& nombreEmp);
	const string& getRut() const;
	void setRut(const string& rut);

private:
	string rut;
	string nombreEmp;
};

} /* namespace std */

#endif /* EMPRESA_H_ */
