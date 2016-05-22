/*
 * DTEstudiantes.h
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#ifndef DTESTUDIANTES_H_
#define DTESTUDIANTES_H_
#include <string>

#include "Date.h"


namespace std {

class DTEstudiantes {
public:
	DTEstudiantes();
	virtual ~DTEstudiantes();
	const string& getApellidoEst() const;
	const string& getCedulaEst() const;
	int getCreditosObtenidos() const;
	const Date& getFechaNacEst() const;
	const string& getNombreEst() const;
	const string& getTelefonoEst() const;

private:
	string nombreEst;
	string cedulaEst;
	string apellidoEst;
	string telefonoEst;
	Date fechaNacEst;
	int creditosObtenidos;
};

} /* namespace std */

#endif /* DTESTUDIANTES_H_ */
