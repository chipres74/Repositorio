// Actividad30.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numero[5]; //Array o vector de 5 números
	int suma; //Un entero que guardará la suma
	numero[0] = 200;
	numero[1] = 150;
	numero[2] = 100;
	numero[3] = -50;
	numero[4] = 300;
	suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
	cout << "La suma es: " << suma;
	return 0;

}


