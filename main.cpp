/* 
CLASE 01_INTRODUCCION A POO

- Aprendiendo a comentar codigo

TIPOS DE DATOS
	- Entero --> int name;
	- Flotante --> float name;
	- Doble --> double name;
	- Caracter --> char name;
	- Cadena --> string name;
	- Boleano --> bool name;

CONTENIDO DE LA CLASE

* Aprendiendo a usar cout
	- impresion de mensaje en pantalla
	- impresion de contenido de las variables en pantalla

---------------------------------------------------------------------
CLASE 02_INTRODUCCION A POO

* Aprendiendo a usar cin
	- valores introducidos por el usuario

* Operadores Basicos
	Operadores:
		Suma +
		Resta -
		Multiplicacion *
		Division /

 */
 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    
	//-------------------------------------- INTRODUCIENDO DATOS POR EL USUARIO
	
	int valueOne;
	cout<<endl<<endl<<"Ingresa un numero entero: ";
	cin>>valueOne;
	cout<<"El numero que ingresaste fue "<<valueOne<<endl<<endl;
	
	float valueTwo;
	cout<<"Ingresa un numero flotante: ";
	cin>>valueTwo;
	cout<<"El numero que ingresaste fue "<<valueTwo<<endl<<endl;
	
	double valueD;
	cout<<"Ingresa un numero doble: ";
	cin>>valueD;
	cout<<"El numero que ingresaste fue "<<valueD<<endl<<endl;
	
	char valueC;
	cout<<"Ingresa un caracter: ";
	cin>>valueC;
	cout<<"El caracter ingresado fue "<<valueC<<endl<<endl;
	
	string valueS;
	cout<<"Ingresa una cadena: ";
	cin>>valueS;
	cout<<"La cadena ingresada fue "<<valueS<<endl<<endl;
	

	// IMPORTANTE:  REGRESAR A LA PRESENTACION.
	/*------------------------------------ COMENTANTO TIPOS DE OPERADORES
		Operadores Aritmeticos:
			Suma +
			Resta -
			Multiplicacion *
			Division /
	*/
	// ----------------------------------- REALIZANDO OPERACIONES BASICAS
	
	// SUMA
	int suma = 4+2;
	cout<<"Suma: "<<4+2<<endl;
	cout<<"Suma: "<<suma<<endl;
	cout<<suma<<endl;
	
	int n1 = 4;
	int n2 = 2;
	cout<<"Suma: "<<n1+n2<<endl;
	cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
	suma = n1+n2;
	cout<<"Suma: "<<suma<<endl;
	
	// RESTA
	cout<<"----------------------"<<endl<<endl;
	
	int resta = 4-2;
	cout<<"Resta: "<<4-2<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<resta<<endl;
	
	n1 = 4;
	n2 = 2;
	cout<<"Resta: "<<n1-n2<<endl;
	cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
	resta = n1-n2;
	cout<<"Resta: "<<resta<<endl;
	
	// MULTIPLICACION
	cout<<"----------------------"<<endl<<endl;
	
	int multiplicacion = 4*2;
	cout<<"multiplicacion: "<<4*2<<endl;
	cout<<"multiplicacion: "<<multiplicacion<<endl;
	cout<<resta<<endl;
	
	n1 = 4;
	n2 = 2;
	cout<<"multiplicacion: "<<n1*n2<<endl;
	cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
	multiplicacion = n1*n2;
	cout<<"multiplicacion: "<<multiplicacion<<endl;
	
	// DIVISION
	cout<<"----------------------"<<endl<<endl;
	
	int division = 4/2;
	cout<<"division: "<<4/2<<endl;
	cout<<"division: "<<division<<endl;
	cout<<resta<<endl;
	
	n1 = 4;
	n2 = 2;
	cout<<"division: "<<n1/n2<<endl;
	cout<<n1<<"*"<<n2<<"="<<n1/n2<<endl;
	division = n1/n2;
	cout<<"division: "<<division<<endl;
	
	/*
	PRACTICA#1: OPERANDO VALORES.
	2.16 Realizar un programa que le pida al usuario dos valores numéricos(de tipo double) y que al
	ingresar los valores se realice la suma, resta, multiplicación y división de 
	estos dos valores.
	*/
	
	//system("PAUSE");
	return 0;
}
