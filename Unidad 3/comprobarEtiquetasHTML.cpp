/*
	Ejercicio #1 - ComprobarEtiquetasHTML
	Nombre: Bryan Engelberto Calderon Lopez
	Carne: CL100517
	Materia: Estructura de Datos
*/

#include <iostream>
#include <regex>
#include <iterator>
#include <string>
#include "p_pila.hpp"


using namespace std;
	
bool revisarEtiquetas(string cadena){
	
	Pila<string> pilaEtiquetas;
	
	// Expresion regular
regex words_regrex("<\\w+>|</\\w+>");
	
	 auto words_begin = sregex_iterator(cadena.begin(), cadena.end(), words_regrex); 
	 auto words_end = sregex_iterator();
	
	
	for(sregex_iterator i = words_begin; i != words_end; ++i){
		smatch match = *i;
		string match_str = match.str();
		cout << match_str << endl;
	}
	

	
	for(sregex_iterator i = words_begin; i != words_end; ++i){
		smatch match = *i; 
		string match_str = match.str();
		
		if(match_str.substr(0,2) == "</"){
			if(pilaEtiquetas.estaPilaVacia()){
				return false;
			}else if(pilaEtiquetas.extraer() != match_str.replace(match_str.find("/"),1,"")){
				return false;
			}else{
				pilaEtiquetas.pop();
			}
		}else{
			pilaEtiquetas.push(match_str);
		}
		
	} 

	return pilaEtiquetas.estaPilaVacia();
}



int main(){
		string etiquetasDesordenadas = "<html><head><title>Ejemplo</head></title><body><h1><p>hola mundo</p></h1></body></html>";
		string etiquetasOrdenadas = "<html><head><title>Ejemplo</title></head><body><h1><p>hola mundo</p></h1></body></html>";
		
		cout << "		 COMPROBANDO SI ETIQUETAS HTML SON ADECUADAS  " << endl << endl;
		if(revisarEtiquetas(etiquetasDesordenadas)){
			cout << "  Etiquetas HTML estan balanceadas " << endl;
		}else{
			cout << "  Etiquetas HTML no estan balanceadas " << endl;
		}
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
		cout << endl << endl;
		if(revisarEtiquetas(etiquetasOrdenadas)){
			cout << "  Etiquetas HTML estan balanceadas ";
		}else{
			cout << "  Etiquetas HTML no estan balanceadas ";
		}


return 0;
}

