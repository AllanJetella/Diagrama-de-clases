#include <iostream>
using namespace std;
class Persona{
	
	protected : 
		string cui,nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
		bool genero;
	// Constructor
	Persona(){
	}	
	Persona(string cui,string nom,string ape,string dir,int tel,string fn, bool gen){
		cui = cui;
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
		genero = gen;
	}
 	//Metodos (Crud)
 	void crear();
 	void leer();
 	void actualizar();
 	void borrar();
};
