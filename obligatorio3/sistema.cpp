/*
 * sistema.cpp
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */

#include "sistema.h"
#include "DTEmpresa.h"
namespace std {

Sistema::Sistema() {
	// TODO Apéndice de constructor generado automáticamente

}

Sistema::~Sistema() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

string Sistema::listaOfertasLaboralesPublicadas() {
	return "Oferta1";
}

string Sistema::seleccionOferta(string numExpediente) {
	return "Estudiante1";
}

void Sistema::confirmarEntrevista() {
}

bool Sistema::controlFecha(Date fecha){
	return true;
}

DTEmpresa* Sistema::listaEmpresasExistentes() {
DTEmpresa* empresa= new DTEmpresa();

	return empresa;
}

DTSucursal* std::Sistema::listaSucursales() {
DTSucursal* sucursal = new DTSucursal();
	return sucursal;
}
DTSeccion* std::Sistema::listaSecciones() {
DTSeccion* seccion = new DTSeccion();
	return seccion;
}
void std::Sistema::ingresaOferta(int nro, string descripcion, string titulo,
		int salarioMax, int salarioMIn, int cantHoras, int cantPuestos,
		Date fechaInicio, Date fechaFin) {
}
bool std::Sistema::seleccionaAsignatura(string asigna) {
	return true;
}
} /* namespace std */
