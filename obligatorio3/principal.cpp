/*
 * principal.cpp
 *
 *  Created on: 17 de may. de 2016
 *      Author: ernesto
 */
#include "stdio.h"
#include "sistema.h"
using namespace std;

Sistema* s;

bool fueraDeFecha(Date fecha){
	return false;
}

void altaEntrevista(){
string oferta,estudiante;
int dd,mm,aaaa;
Date fechaEnt;

	cout<< "Elija una oferta Laboral";
	cout<< s->listaOfertasLaboralesPublicadas();
	cin>>oferta;
	cout<< "Elija una Estudiante";
	cout<< s->seleccionOferta(oferta);
	cin>>estudiante;

	cout<< "Ingrese Fecha Entrevista";
	cin>>dd;
	cin>>mm;
	cin>>aaaa;
	fechaEnt = Date(dd,mm,aaaa);
	if (s->controlFecha(fechaEnt)){
		s->confirmarEntrevista();
		cout<< "se ingresó la entrevista";
	}else
		cout<< "Fecha de Entrevista fuera del Rango";



}

void altaOfertaLaboral(){
	string empresa,sucursal,seccion,descripcion,titulo,asigna;
	int dd,mm,aaaa,salarioMax,salarioMin,cantHoras,cantPuestos,nro, fin = 1;
	//Date fechaIni,fechaFin;
	//Asignaturas listaAsig;

		cout<< "Elija una Empresa";
		s->listaEmpresasExistentes();
		cin>>empresa;
		cout<< "Elija una Sucursal";
		s->listaSucursales();
		cin>>sucursal;
		cout<< "Elija una Seccion";
		s->listaSecciones();
		cin>>seccion;

		cout<<"ingrese Número";
		cin>>nro;
		cout<<"ingrese descripcion";
		cin>>descripcion;
		cout<<"ingrese titulo";
		cin>>titulo;
		cout<<"ingrese Salario Max";
		cin>>salarioMax;
		cout<<"Ingrese Salario MIn";
		cin>>salarioMin;
		cout<<"Ingrese Cantidad Horas";
		cin>>cantHoras;
		cout<<"Ingrese Cantidad de Puestos";
		cin>>cantPuestos;
		cout<< "Ingrese Fecha Inicio";
			cin>>dd;
			cin>>mm;
			cin>>aaaa;
			Date* fechaIni = new Date(dd,mm,aaaa);

		cout<< "Ingrese Fecha Fin";
			cin>>dd;
			cin>>mm;
			cin>>aaaa;
			Date* fechaFin = new  Date(dd,mm,aaaa);
		while (fin){
			cout<<"Ingrese Asignatura";
			cin>>asigna;
			if (s->seleccionaAsignatura(asigna)){
				cout<<"Asignada";
			}

			cout << "Seguir agregando Asignaturas? [1-Si/0-No]";
			cin >> fin;
		}

		s->ingresaOferta(nro,descripcion,titulo,salarioMax,salarioMin,cantHoras,cantPuestos,fechaIni,fechaFin);
}
int main(int argc, char *argv[]){
		//Creamos la instancia del Sistema
		s = new Sistema();
		int opcion=1;

		while(opcion!=0){
			cout << "Ingrese una opción [0-Salir / 1-Alta Oferta Laboral / 2-Alta Entrevista ]:";
			cin >> opcion;
			switch (opcion){
				case 0:
					cout << "saliendo!!!";
					break;
				case 1:
					altaOfertaLaboral();
					break;
				case 2:
					altaEntrevista();
					break;
			}
		}
		return 0;
}

