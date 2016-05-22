/*
 * DTSeccion.h
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#ifndef DTSECCION_H_
#define DTSECCION_H_
#include <string>
namespace std {

class DTSeccion {
public:
	DTSeccion();
	virtual ~DTSeccion();
	const string& getEncargado() const;
	const string& getInterno() const;
	const string& getNombreSeccion() const;

private:
	string nombreSeccion;
	string interno;
	string encargado;
};

} /* namespace std */

#endif /* DTSECCION_H_ */
