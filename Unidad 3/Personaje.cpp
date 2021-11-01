#include <iostream>

using namespace std;


class Personaje{
	public:
	Personaje();
	void recibirGolpe(int puntosPerdidos); // recibe el parámetro puntosPerdidos, que representa la cantidad de puntos a sustraer de los puntosVida como resultado de que el personaje reciba un golpe sin defenderse.
	bool estaVivo(); // devolverá true si los puntos de vida son mayores a cero y false, en caso contrario.
	int getPuntosVida(); // devuelve el valor del atributo privado puntosVida
	void getNombre(); // devuelve el valor del atributo privado nombre	
	void comer(int puntosGanados); //  suma el parámetro puntosGanados a los puntos de vida del personaje, como resultado de alimentarse, si el personaje está vivo; de lo contrario, no tiene ningún efecto (no se puede “revivir” a un personaje fallecido ?).

	
	private:
	string nombre;	
	int puntosVida;
	
};

Personaje::Personaje(){
	nombre = "Tewston01";
	puntosVida = 100;
}

void Personaje::recibirGolpe(int puntosPerdidos){
	if(this->puntosVida < puntosPerdidos){
		cout << "El personaje esta muerto? " << "Si" << endl;
		this->puntosVida = 0;
	}else{
		this->puntosVida -= puntosPerdidos;
	}
	cout << "Vida: " << this->getPuntosVida() << endl;
}

bool Personaje::estaVivo(){
	if(this->getPuntosVida()>0){
		return true;
	}else{
		return false;
	}
}

int Personaje::getPuntosVida(){
	
	return this->puntosVida;
}

void Personaje::getNombre(){
	cout << "Personaje: " << this->nombre << endl;
}

void Personaje::comer(int puntosGanados){
	if(this->estaVivo()){
		this->puntosVida += puntosGanados;	
		if(this->puntosVida > 100){
			this->puntosVida = 100;
		}
	}else{
		cout << "El personaje ya esta muerto... F" << endl;
	}
	cout << "Vida: " << this->getPuntosVida() << endl;
}


int main(){
	int puntosPerdidos;
	int puntosGanados;
	
	Personaje miPersonaje;
	miPersonaje.getNombre();
	miPersonaje.estaVivo();
	cout << "Vida: " << miPersonaje.getPuntosVida() << endl;
	
	
	
	cout << "Daño del golpe: ";
	cin >> puntosPerdidos;
	miPersonaje.recibirGolpe(puntosPerdidos);
	
	miPersonaje.getPuntosVida();
	
	cout << "Puntos ganados por alimentarse: ";
	cin >> puntosGanados;
	miPersonaje.comer(puntosGanados);
	
	miPersonaje.getPuntosVida();
	
}


