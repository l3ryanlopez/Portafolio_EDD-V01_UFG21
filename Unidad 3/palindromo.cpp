/*
	Ejercicio #2 - Es Palindromo?
	Nombre: Bryan Engelberto Calderon Lopez
	Carne: CL100517
	Materia: Estructura de Datos
*/

#include <iostream>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>
#include "p_pila.hpp"
#include "p_cola.hpp"

using namespace std;

bool evaluarPalindromo(string palabraEvaluar);
bool evaluarTexto(string mensaje);

int main(){
	// Declaracion de variables
	string palabra;
	string cadenaLimpiar;
	// Inicio
	cout << "		 COMPARADOR DE PALABRAS, SI ES PALINDROMO " << endl << endl;
	cout << "Introduzca la palabra a comparar: ";
	getline(cin, palabra);
	cout << endl;
	// Limpiando cadena de caracteres especiales y espacios en blancos
	cadenaLimpiar = palabra;
	cadenaLimpiar.erase(std::remove(cadenaLimpiar.begin(), cadenaLimpiar.end(), ' '), cadenaLimpiar.end());
	cadenaLimpiar.erase(std::remove_if(cadenaLimpiar.begin(), cadenaLimpiar.end(), [](unsigned char c) { return std::ispunct(c); }), cadenaLimpiar.end()); 
	
	string upperCadena = cadenaLimpiar;
	
	// Recorrer toda la cadena
  	for (int i = 0; i < upperCadena.length(); i++) {
    	// Y cambiar cada letra por su representación
    	// mayúscula
    	upperCadena[i] = toupper(upperCadena[i]);
  	}

	if(evaluarPalindromo(upperCadena)){
		cout << "La palabra: '" << cadenaLimpiar << "' es Palindromo :)" << endl;
	}else{
		cout << "La palabra: '" << cadenaLimpiar << "' NO es Palindromo ;(" << endl;
	}
	
	
	return 0;
	

}

bool evaluarPalindromo(string palabraEvaluar){
	// Declaracion de variables
	char letra;
	string palabraPila;
	string palabraLetra;
	
	// Declaracion de pila y cola a partir de lista generica
	Pila<char> pilaLetra;
	Cola<char> colaLetra;
	
	// Utilizando Pila y Cola
	for(int i = 0; i < palabraEvaluar.length(); i++){
		letra = palabraEvaluar[i];
		pilaLetra.push(letra);
		colaLetra.enqueue(letra);
	}
	
	for(int i = 0; i < palabraEvaluar.length(); i++){
		palabraPila += pilaLetra.pop();
		palabraLetra += colaLetra.dequeue();
	}
	
	if(palabraPila == palabraLetra){
		return true;
	}else{
		return false;
	}
	
}
