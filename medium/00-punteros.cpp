
#include <iostream>

/*
	Los punteros normalmente son algo esencial en C y C++
	Pero dado que pueden tener su intringulis, y por eso 
	prefiero ponerlo en medio y como el primer archivo.

	Junto con los punteros se van a ver algunos aspectos
	como acceso y modificación de posiciones de memoria.

	Un puntero sirve para acceder a direcciones de memoria 
	y se indica con un *.
*/

int main() {
	int* p;		//Se corresponde con un puntero que indica a una dirección de memoria.
	
	/* 	Actualmente p no apunta a nada, para poder usarlo primero debemos
		obtener una direcicón de memoria válida, es decir, una que no se use. */

	p = new int; 	//p apunta ahora a una dirección de memoria válida para escribir enteros.
	//Para obtener una dirección de memoria se usa new <tipo de variable>

	*p = 12; 		//Para acceder al valor de la posición se una *<variable>

	std::cout << p << "-" << *p << "\n";

	//De igual forma que se reserva memoria con new, lo correcto es 
	//liberarla una vez hemos acabado de utilizarla.
	delete p;

	//Tanto en C como C++ los vectores (vector == array == lista) se gestionan
	//con punteros. Obteniendo como dírección la del primer elemento.

	int *vector = new int[5]; 	//Esto reserva 5 direcciones de memoria para enteros
								//Y devuelve la 1º dirección.
	for (int i=0; i<5;i++) {
		vector[i] = i+1;
	}

	for (int i=0; i<5;i++) {
		std::cout << "Posicion " << i << " - Valor " << vector[i] << "\n";
	}

	delete[] vector;

	/*
		De igual forma se pueden obtener direcciones de memoria de variables normales
		mediante &.

		Por ejemplo, si tenemos:
			int a = 5;
		Si hacemos &a, obtenemos la dirección de memoria que apunta al 5.
	*/

	return 0;
}

//Aunque no se ha dicho nada, C++ también permite gestionar memoria 
//dinámicamente igual que en C (malloc y free)