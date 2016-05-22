/*
 * DTOfertas.h
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#ifndef DTOFERTAS_H_
#define DTOFERTAS_H_

#include <string>
#include "Date.h"
namespace std {

class DTOfertas {
public:
	DTOfertas();
	virtual ~DTOfertas();
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

#endif /* DTOFERTAS_H_ */
