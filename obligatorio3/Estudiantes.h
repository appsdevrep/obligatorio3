/*
 * Estudiantes.h
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#ifndef ESTUDIANTES_H_
#define ESTUDIANTES_H_
#include <string.h>
#include <iostream>
#include "Date.h"
namespace std {

class Estudiantes {
public:
	Estudiantes();
	virtual ~Estudiantes();
	const string& getApellidoEst() const;
	void setApellidoEst(const string& apellidoEst);
	const string& getCedulaEst() const;
	void setCedulaEst(const string& cedulaEst);
	const Date& getFechaNacEst() const;
	void setFechaNacEst(const Date& fechaNacEst);
	const string& getNombreEst() const;
	void setNombreEst(const string& nombreEst);
	const string& getTelefonoEst() const;
	void setTelefonoEst(const string& telefonoEst);

private:
	string nombreEst;
	string cedulaEst;
	string apellidoEst;
	string telefonoEst;
	Date fechaNacEst;
};

} /* namespace std */

#endif /* ESTUDIANTES_H_ */
