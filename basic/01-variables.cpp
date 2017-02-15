//Como ya se ha visto en el HolaMundo, 
//tenemos más o menos las mismas variables que en C

#include <iostream>

int main() {

	/*Tenemos tipos numéricos:
		- Enteros: int, short y long
		- Reales: float y double
		- Booleanos: bool, posibles valores: true y false
		- Texto: char (caracteres individuales) y string (de "std")
	*/
	// Bien
	int pepe = 13;
	/* MAL
		int pepe2 = 23.2321;
		int pepe3 = "OLA K ASE";
		int pepe4 = true;
	*/
	//Bien
	char pepe_c = 'c';
	/* MAL
		Cualquier otra letra del abecedario
	*/
	//Bien
	float pepe_float = 0.23;
	float pepe_float2 = 12.0;
	/* MAL
		float pepe = "COSAS";
		float pepe2 = true;
	*/
	//Bien
	bool pepe_boolean = true; // == 1
	bool pepe_boolean2 = false; // == 0
	bool pepe_boolean3 = 0; //0 == false
	bool pepe_boolean4 = 13; //CUALQUIER NUMERO DISTINTO DE 0 == true
	/* MAL
		Cualquier otra asignación
	*/
	std::cout << (pepe_boolean)<<"\n";
	std::cout << (pepe_boolean2)<<"\n";
	std::cout << (pepe_boolean3)<<"\n";
	std::cout << (pepe_boolean4)<<"\n";

	/*
		Los strings guardan dos tipos e información:
			- Longitud de la cadena
			- Contenido de la cadena.
	*/
	std::string cadenaTexto = "Cadena"; //Longitud 6, Contenido= "Cadena"


	return 0;
}