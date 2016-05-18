/*
 * sistema.h
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include <iostream>
#include <string>
#include "Date.h"
namespace std {

class Sistema {
public:
	Sistema();
	virtual ~Sistema();
	string listaOfertasLaboralesPublicadas();
	string listaEstudiantesInscriptos(string numExpediente);
	void ingresaEntrevista(string numExpediente, string cedula,Date fechaEntrevista);

};

} /* namespace std */

#endif /* SISTEMA_H_ */
