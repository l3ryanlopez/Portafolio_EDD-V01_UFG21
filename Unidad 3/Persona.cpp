#include <iostream>
#include <ctime>


using namespace std;


class Persona{
	public:
	Persona();
	void nombreCompleto(); //  debe devolver los nombres concatenados con un espacio en blanco y con los apellidos de la persona.
	void edad(int anioActual); // devolverá el resultado de restar el año de nacimiento del año actual (2021). Opcional: investigue cómo se puede obtener el año a partir de la fecha actual en C++.
	
	private:
	string nombres;
	string apellidos;
	int anioNacimiento;
};

Persona::Persona(){
	nombres = "Bryan Engelberto";
	apellidos = "Calderon Lopez";
	anioNacimiento = 1998;
}

void Persona::nombreCompleto(){
	cout << "Su nombre es: " << this->nombres << " " << this->apellidos << endl;
}

void Persona::edad(int anioActual){
	int anios = anioActual - this->anioNacimiento ;
	cout << "Su edad es: " << anios << endl;
}

int obtenerAnio(){
	int Anio;
	time_t t = time( NULL );
	struct tm today = *localtime( &t );
	Anio = (today.tm_year+1900);
	return Anio;
}

int main(){
	Persona Yo;
	Yo.nombreCompleto();
	Yo.edad(obtenerAnio());
	
	return 0;
}




