#include <iostream>
#include "string"

using namespace std;

int main()
{
	//Mensaje de bienvenida 
	cout << "Hola! Este programa 1.6 Escribe los datos en orden inverso" << "\n";
	
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	int A, B, C, D;
	
	//Se pide el primer numero 
	cout << "Por favor ingrese el valor de A: "<< "\n";
	
	//Se asigna el primer valor a A
	cin >> A; 
	
	//Se pide el segundo numero 
	cout << "Por favor ingrese el valor de B: "<< "\n";
	
	//Se asigna el segundo valor a B
	cin >> B;
	
	//Se pide el tercer numero 
	cout << "Por favor ingrese el valor de C: "<< "\n";
	
	//Se asigna el tercer valor a C
	cin >> C;
	
	//Se pide el tercer numero 
	cout << "Por favor ingrese el tercer valor de D: "<< "\n";
	
	//Se asigna el segundo valor a D
	cin >> D;
	
	//se muestra el resultado.
	cout << D << " , " << C << " , " << B << " , " <<A;
	
	return 0;
}
