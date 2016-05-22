/*
 * DTEmpresa.h
 *
 *  Created on: 18 de may. de 2016
 *      Author: ernesto
 */

#ifndef DTEMPRESA_H_
#define DTEMPRESA_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class DTEmpresa {
public:
	DTEmpresa();
	virtual ~DTEmpresa();
	const string& getNombreEmp() const;
	const string& getRut() const;

private:
	string nombreEmp;
	string rut;
};

} /* namespace std */

#endif /* DTEMPRESA_H_ */
