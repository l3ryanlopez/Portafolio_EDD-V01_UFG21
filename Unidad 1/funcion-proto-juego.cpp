/* 	ALUMNO: BRYAN ENGELBERTO CALDERON LOPEZ
	CARNÉ: 	CL100517
	TARÉA: 	JUEGO PIEDRA-PAPELAGARTO
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//Prototipos
std::string generarMoviComputador();
std::string obtenerMoviJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

using namespace std;
int main(){
	string movimientoJugador;
	cout << " Bryan Engelberto Calderon Lopez, Te da la bienvenida a su juego piedra-papeLagarto \n \n";
	
	do{
	movimientoJugador = obtenerMoviJugador();
	string movimientoComputadora = generarMoviComputador();
	determinarGanador(movimientoComputadora, movimientoJugador);
	cout <<" ******************* \n \n";
	}
	
	while(movimientoJugador != "Salir");
	
	return 0;
}

string generarMoviComputador(){
	int aleatorio;
	std::string movimiento;
	
	srand(time(0));
	
	aleatorio = rand() % 5 + 1;
	
	switch(aleatorio){
		case 1: 
			movimiento = "Piedra";
			break;
		case 2: 
			movimiento = "Papel";
			break;
		case 3:
			movimiento = "Tijera";
			break;
		case 4: 
			movimiento = "Lagarto";
			break;
		case 5:
			movimiento = "Spock";
			break;
	}
	
	cout << "La computadora escogio \"" << movimiento << "\" " << endl;
	
	return movimiento;	
}

string obtenerMoviJugador(){
	int opcion;
	string movimiento;
	
	cout << " Juguemos a piedra, papel, tijera, lagarto o spock \n \n ";
	cout << "1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock  \n 6. Salir del juego :  \n \n";
	cout << " Selecciona tu movimiento: ";
	cin >> opcion;
		
	switch(opcion){
		case 1: 
			movimiento = "Piedra";
			break;
		case 2: 
			movimiento = "Papel";
			break;
		case 3:
			movimiento = "Tijera";
			break;
		case 4: 
			movimiento = "Lagarto";
			break;
		case 5:
			movimiento = "Spock";
			break;
		case 6:
			movimiento = "Salir";
			break;
		default:
			movimiento = "Introduzca un valor correcto";
	}
	
	return movimiento;
}

void determinarGanador(string computadora, string jugador){
	if(computadora == jugador){
		cout << "Empate * = * \n";
	} else if(jugador == "Piedra"){
		procesarEntradaJugadorPiedra(computadora);
	} else if(jugador == "Papel"){
		procesarEntradaJugadorPapel(computadora);
	} else if(jugador == "Tijera"){
		procesarEntradaJugadorTijera(computadora);
	} else if(jugador == "Lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	} else if(jugador == "Spock"){
		procesarEntradaJugadorSpock(computadora);
	}else{
		cout << jugador <<endl;
	}
}

void procesarEntradaJugadorPiedra(string computadora){
	if(computadora == "Lagarto"){
		cout << "Tu ganas, la piedra aplasta al lagarto \n";
	}else if(computadora == "Tijera"){
		cout << "Tu ganas, la piedra aplasta las tijeras \n";
	}else{
		cout << "Tu pierdes. :( \n";
	}
}

void procesarEntradaJugadorPapel(string computadora){
	if(computadora == "Piedra"){
		cout << "Tu ganas, el papel envuelve la piedra \n";
	}else if(computadora == "Spock"){
		cout << "Tu ganas, el papel desaprueba a spock \n";
	}else
		cout << "Tu pierdes. :( \n";
	
}

void procesarEntradaJugadorTijera(string computadora){
	if(computadora == "Papel"){
		cout << "Tu ganas, las tijeras cortan el papel \n";
	}else if(computadora == "Lagarto"){
		cout << "Tu ganas, las tijeras decapitan al lagarto \n";
	}else{
		cout << "Tu pierdes. :( \n";
	}
}

void procesarEntradaJugadorLagarto(string computadora){
	if(computadora == "Spock"){
		cout << "Tu ganas, el lagarto envenena a spock \n";
	}else if(computadora == "Papel"){
		cout << "Tu ganas, el lagarto devora el papel \n";
	}else{
		cout << "Tu pierdes. :( \n";
	}
}

void procesarEntradaJugadorSpock(string computadora){
	if(computadora == "Tijera"){
		cout << "Tu ganas, spock aplasta las tijeras \n";
	}else if(computadora == "Piedra"){
		cout << "Tu ganas, desintegra la piedra \n";
	}else{
		cout << "Tu pierdes. :( \n";
	}
}



