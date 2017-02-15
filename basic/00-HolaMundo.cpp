/*
	Los archivos se compilan usando g++, no gcc
*/

#include <iostream> //Para poder tener entrada y salida

//Todo debe estar en un main, como C.
int main() {
	//La sintaxis para crear y definir variables es idéntica a C.
	int primera_variable;

	//Asignarles valores es más de lo mismo
	primera_variable = 12;

	int pepe = 0;

	//Tenemos enteros, flotantes, longs, doubles...
	long largo = 999L;
	float flotante = 12.4F;
	double dobles = 14.2346434;

	// TIENE STRINGS !!!! STRINGSSSSSSSS AAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHH SIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	// DATO: Para usar strings debemos hacer std:: para acceder al tipo de dato
	std::string nombre = "Usuario desconocido";

	//Saca por salida estándar (terminal) el texto
	std::cout<<"TIENE STRIIIIINGS " << nombre << "!\n";

	return 0;
}
