/*
    const indica que algo es constante, por lo tanto, su valor
    no puede cambiar a lo largo de la ejecución.
    
    Este archivo contiene usos y ejemplos de const.
*/

#include <iostream>

//Devolución de valores fijos.
const char* funct1() {
	return "Ola k ase";
}

//Paso de valores constantes.
//Sobretodo útil para ahorrar memoria (copia)
//y se pasa un objeto grande sólo para lectura.
void functConst2 (int const &param) {
	//param = 12; //Explota por intentar modificar un valor constante
}

void functNoConst2 (int &param) {
	param = 12;
}


int main () {

	//funct1()[0] = 'b'; //Esto explota porque la cadena es const -> fija

	int var = 5;
	std::cout << "var: " << var << "\n";
	functNoConst2(var);
	std::cout << "var: " << var << "\n";
    return 0;
}