#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	//Mensaje de bienvenida 
	cout << "Hola! Este programa 1.7 Escribir el resultado der la expresion" << "\n";
	
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	
	//Se pide el primer numero 
	cout << "Por favor ingrese el valor de A: "<< "\n";
	//Se asigna el primer valor a A
	cin >> A; 
	//Se pide el primer numero 
	cout << "Por favor ingrese el valor de B: "<< "\n";
	//Se asigna el primer valor a B
	cin >> B;
	
	RES=((A+B)*(A+B))/3.0;
	
	//Se muestra el resultado.
	printf ("\n El resultado de la expresion es %5.4f \n",RES);
	cout << "EL RESULTADO DE LA EXPRESION " << RES <<"\n";
	
	return 0;
}
