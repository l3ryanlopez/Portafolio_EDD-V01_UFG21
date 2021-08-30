/* 	ALUMNO: BRYAN ENGELBERTO CALDERON LOPEZ
	CARNÉ: 	CL100517
	TARÉA: 	JUEGO PIEDRA-PAPELAGARTO
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int movJugador;
	cout << " Bryan Engelberto Calderon Lopez, Te da la bienvenida a su juego piedra-papeLagarto \n \n";
	cout << " Juguemos a piedra, papel, tijera, lagarto o spock, Selecciona tu movimiento: \n \n ";
	cout << "1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock :  ";
	cin >> movJugador;
	srand(time(0));
	string movComputador;
	
	int numMovimiento = rand() % 5 + 1;
	
	switch(numMovimiento){
		case 1: 
			movComputador = "Piedra";
			break;
		case 2: 
			movComputador = "Papel";
			break;
		case 3:
			movComputador = "Tijera";
			break;
		case 4: 
			movComputador = "Lagarto";
			break;
		case 5:
			movComputador = "Spock";
			break;
	}
	
	cout << "La computadora escogio \"" << movComputador << "\" " << endl;
	
	if(movJugador == numMovimiento){
		cout << "Empate \n";
	} else if((movJugador == 3) && (numMovimiento == 2)){
		cout << "Las tijeras cortan el papel \n   Ganaste!! \n";
	} else if((movJugador == 2) && (numMovimiento == 1)){
		cout << "El papel envuelve a la piedra \n   Ganaste!! \n";
	} else if((movJugador == 1) && (numMovimiento == 4)){
		cout << "La piedra aplasta al lagarto \n   Ganaste!! \n";
	} else if((movJugador == 4) && (numMovimiento == 5)){
		cout << "El lagarto envenena a spock \n   Ganaste!! \n";
	} else if((movJugador == 5) && (numMovimiento == 3)){
		cout << "Spock aplasta las tijeras \n   Ganaste!! \n";
	} else if((movJugador == 3) && (numMovimiento == 4)){
		cout << "Las tijeras decapitan al lagarto \n   Ganaste!! \n";
	} else if((movJugador == 4) && (numMovimiento == 2)){
		cout << "El lagarto devora el papel \n   Ganaste!! \n";
	} else if((movJugador == 2) && (numMovimiento == 5)){
		cout << "El papel desaprueba a spock \n   Ganaste!! \n";
	} else if((movJugador == 5) && (numMovimiento == 1)){
		cout << "Spock desintegra la piedra \n   Ganaste!! \n";
	} else if((movJugador == 1) && (numMovimiento == 3)){
		cout << "La piedra aplasta a las tijeras \n   Ganaste!! \n";
	} else{
		cout << "Perdiste :(";
	}
	
	return 0;
}
