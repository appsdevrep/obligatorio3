/*
 * DTSucursal.h
 *
 *  Created on: 21 de may. de 2016
 *      Author: ernesto
 */

#ifndef DTSUCURSAL_H_
#define DTSUCURSAL_H_
#include <string>
namespace std {

class DTSucursal {
public:
	DTSucursal();
	virtual ~DTSucursal();
	const string& getDireccion() const;
	const string& getNombreSuc() const;
	const string& getTelefono() const;

private:
	string nombreSuc;
	string telefono;
	string direccion;
};

} /* namespace std */

#endif /* DTSUCURSAL_H_ */
