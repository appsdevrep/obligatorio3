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
	cout<< s->listaEstudiantesInscriptos(oferta);
	cin>>estudiante;

	cout<< "Ingrese Fecha Entrevista";
	cin>>dd;
	cin>>mm;
	cin>>aaaa;
	fechaEnt = Date(dd,mm,aaaa);
	if (fueraDeFecha(fechaEnt))
		cout<< "Fecha de Entrevista fuera del Rango";
	else{
		s->ingresaEntrevista(oferta,estudiante,fechaEnt);
		cout<< "se ingresó la entrevista";
	}

}

void altaOfertaLaboral(){

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

