#include <iostream>

using namespace std;


class CuentaBancaria{
	public:
	CuentaBancaria();
	void getSaldo(); // devuelve el saldo disponible en la cuenta bancaria
	void getNumeroCuenta(); // devuelve el numeroCuenta asociado a la cuenta bancaria.
	void getNombreTitular(); // devuelve el nombreTitular asociado a la cuenta bancaria.
	void depositar(double importeDeposito); // recibe el parámetro importeDeposito, que deberá sumarse al saldo de la cuenta. El importe deberá ser positivo; de ser negativo, deberá ignorarse.
	void retirar(double importeRetiro); // recibe el parámetro importeRetiro, que deberá restarse del saldo de la cuenta. El importe deberá ser positivo y menor o igual al saldo disponible; de lo contrario, se ignorará.
	
	private:
	int numeroCuenta;
	string nombreTitular;
	double saldo;
};

CuentaBancaria::CuentaBancaria(){
	numeroCuenta = 100517;
	nombreTitular = "Bryan Lopez";
	saldo = 5000.50;
}

void CuentaBancaria::depositar(double importeDeposito){
	this->saldo += importeDeposito;
}

void CuentaBancaria::retirar(double importeRetiro){
	if(this->saldo < importeRetiro){
		cout << "Saldo insuficiente" << endl;
	}else{
		this->saldo -= importeRetiro;
	}
}

void CuentaBancaria::getNombreTitular(){
	cout << "Titular de la cuenta: " << nombreTitular << endl;
}

void CuentaBancaria::getNumeroCuenta(){
	cout << "Numero de cuenta: N_" << numeroCuenta << endl;
}

void CuentaBancaria::getSaldo(){
	cout << "Saldo en cuenta: $" << saldo << endl;
}

int main(){
	double deposito;
	double retiro;
	
	CuentaBancaria miCuenta;
	miCuenta.getNombreTitular();
	miCuenta.getNumeroCuenta();
	miCuenta.getSaldo();
	
	cout << "Cantidad a depositar: ";
	cin >> deposito;
	miCuenta.depositar(deposito);
	
	miCuenta.getSaldo();
	
	cout << "Cantidad a retirar: ";
	cin >> retiro;
	miCuenta.retirar(retiro);
	
	miCuenta.getSaldo();
	
}


