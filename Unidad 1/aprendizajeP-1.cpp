/* 	ALUMNO: BRYAN ENGELBERTO CALDERON LOPEZ
	CARNÉ: 	CL100517
	TARÉA: 	APLICACION APRENDIZAJE P-1
      1. Pida al usuario que ingrese los tres lados de un triangulo y en base a ello determine si es equilátero, 
	     escaleno o isósceles. En base a la información, calcule el área de dicha figura.
      2. Utilizando condicionales (if ... else, etc) elabore una función que solicite 5 números al usuario y 
	     luego le indique el número mayor.
      3. Utilizando bucles solicite a un usuario que introduzca cualquier cantidad de números y al terminar 
	     de ejecutar el bucle que retorne el valor promedio de los números ingresados.
*/

#include <iostream>
#include <cmath>

// Prototipos
void ejercicio1();
void areaTrianguloEquilatero(double areaEquilatero);
void areaTrianguloIsoscel(double A, double B, double C);
void areaTrianguloEscaleno(double ladoA, double ladoB, double ladoC);

void ejercicio2();
void encontrarMayor(int N1, int N2, int N3, int N4, int N5);

void ejercicio3();
void obtenerPromedio(double suma, int contar);

using namespace std;
int main(){
	cout << " ALUMNO: BRYAN ENGELBERTO CALDERON LOPEZ \n \n";
	cout << "\n Ejercicio 1: Determinar Area del triangulo \n \n";
	ejercicio1();
	cout << "\n Ejercicio 2: Determinar cual es el numero mayor \n \n";
	ejercicio2();
	cout << "\n Ejercicio 3: Encontrar promedio de una serie de numeros \n \n";
	ejercicio3();
	return 0;
}

// EJERCICIO - 1 >>
void ejercicio1(){
	double ladoA;
	double ladoB;
	double ladoC;
	
	cout << " Ingrese el valor del lado A: ";
	cin >> ladoA ; 
	cout << " Ingrese el valor del lado B: ";
	cin >> ladoB ; 
	cout << " Ingrese el valor del lado C: ";
	cin >> ladoC ; 
	
	if(ladoA == ladoB && ladoB == ladoC){
		cout << " Es un Triangulo Equilatero \n";
		areaTrianguloEquilatero(ladoA);
		
	}else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
		cout << " Es un Triangulo Isoscel \n";
		areaTrianguloIsoscel(ladoA, ladoB, ladoC);
	}else{
		cout << " Es un Triangulo escaleno \n";
		areaTrianguloEscaleno(ladoA, ladoB, ladoC);
	}
}

void areaTrianguloEquilatero(double areaEquilatero){
	double area;
	
	area = (sqrt(3)/4)*pow(areaEquilatero, 2);
	
	cout << " El area del triangulo es: " << area << endl;
};

void areaTrianguloIsoscel(double A, double B, double C){
	double ladoIgual;
	double base;
	double area;
	
	if(A == B){
		ladoIgual = A;
		base = C;
	}else if(A == C){
		ladoIgual = A;
		base = B;	
	}else{
		ladoIgual = B;
		base = A;
	}
	
	area = ( (base) * ( sqrt( pow(ladoIgual, 2 ) - ( pow(base, 2) / 4)))) / 2;
	
	cout << " El area del triangulo es: " << area << endl;
	
};

void areaTrianguloEscaleno(double ladoA,double ladoB,double ladoC){
	double semiPerimetro = (ladoA + ladoB + ladoC)/2;
	double area;
	
	area = sqrt(semiPerimetro * (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC));
	
	cout << " El area del triangulo es: " << area << endl;
};
// << FIN - 1

//EJERCICIO - 2 >>
void ejercicio2(){
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	
	cout << " Por favor introduzca 5 numeros: \n";
	cout << " N-1 : ";
	cin >> numero1;
	cout << " N-2 : ";
	cin >> numero2;
	cout << " N-3 : ";
	cin >> numero3;
	cout << " N-4 : ";
	cin >> numero4;
	cout << " N-5 : ";
	cin >> numero5;
	
	encontrarMayor(numero1, numero2, numero3, numero4, numero5);
	
	
}

void encontrarMayor(int N1, int N2, int N3, int N4, int N5){
	int numeroMayor;
	
	if(N1 >= N2 && N1 >= N3 && N1 >= N4 && N1 >= N5){
		numeroMayor = N1;
	}else if(N2 >= N1 && N2 >= N3 && N2 >= N4 && N2 >= N5){
		numeroMayor = N2;
	}else if(N3 >= N1 && N3 >= N2 && N3 >= N4 && N3 >= N5){
		numeroMayor = N3;
	}else if(N4 >= N1 && N4 >= N2 && N4 >= N3 && N4 >= N5){
		numeroMayor = N4;
	}else if(N5 >= N1 && N5 >= N3 && N5 >= N4 && N5 >= N2){
		numeroMayor = N5;
	}
	
	cout <<"\n El numero mayor es: " << numeroMayor << endl;
}
// << FIN - 2

//EJERCICIO - 3 >>
void ejercicio3(){
	int contador = 0;
	double valores;
	double suma;
	double promedio;
	
	cout << " Introduzca una serie de numeros y asi calcular el promedio :para finalizar digite \"0\" \n" ;
	
	while(valores != 0){
		contador++;
		cout << " N-"<<contador <<" :";
		cin >> valores;
		suma += valores;
//		cout << suma;
	}
	cout << " La suma total es: " << suma << " ... y la cantidad de numeros ingresados es de: " << (contador-1) <<endl ;
	obtenerPromedio(suma, contador);
}

void obtenerPromedio(double suma, int contar){
	double promedio;
	
	promedio = suma / (contar-1);
	
	cout << "\n El promedio es: " << promedio << endl;
};
// << FIN - 3
