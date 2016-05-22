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
#include "DTEmpresa.h"
#include "DTSucursal.h"
#include "DTSeccion.h"
#include "DTOfertas.h"
#include "DTEstudiantes.h"


namespace std {

class Sistema {
public:
	Sistema();
	virtual ~Sistema();
	string listaOfertasLaboralesPublicadas();
	string seleccionOferta(string numExpediente);
	void confirmarEntrevista();
	bool controlFecha(Date fecha);
	DTEmpresa* listaEmpresasExistentes();
	DTSucursal* listaSucursales();
	DTSeccion* listaSecciones();
	void ingresaOferta(int nro ,string descripcion,string titulo,int salarioMax, int salarioMIn, int cantHoras, int cantPuestos, Date fechaInicio,Date fechaFin);
	bool seleccionaAsignatura(string asigna);
};

} /* namespace std */

#endif /* SISTEMA_H_ */
