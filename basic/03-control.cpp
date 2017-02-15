#include <iostream>

int main() {
	/*Las sentencias de control son las típicas de todos
	los lenguajes.

		----------------------if-else -----------------------
		if (condicion verdadera) {
			haz cosas
			y sal del if
		} else { <--- Si NO se cumple la condición
			haz otras cosas
		}

		Else es opcional. No es obligatorio ponerlo

		También se puede evaluar varias condiciones
		if (condicion1 verdadera) {
			haz cosas y sal del if
		} else if (condicion2 verdadera) {
			haz cosas y sal del if
		}
	*/
	int a;
	if (5==3) {
		a = 3;
	} else if (5 != 4) {
		a = 99;
	} else {
		std::cout << "Yukse tio xddd";
	}

	/*
		--------------------- for -------------------------
		Se realiza el código dentro del for mientras la condición sea verdadera
		for (variable; condicion verdadera; posible operación) {
			haz cosas.
		}
	*/

	int b = 0;
	for (int i = 0; i<10; i++) {
		//Al final b vale 10
		b += 1;
	}
	std::cout << "b: "<< b << "\n";
	//Se pueden omitir parámetros del for
	int control = 10, c=0;
	for (;1<control; control--){
		//Al final del bucle debería valer 9
		c++;
	}
	std::cout << "c: "<< c << "\n";
	/*
		---------------------- while ------------------------
		Similar al for
		while (condicion verdadera) {
			haz cosas
		}
	*/
	while (c>0){
		c--;
	}
	std::cout << "c while: "<< c << "\n";

	/*
		------------------------ do-while --------------------
		Similar al while, pero el código se ejecuta al menos 1 vez
		do {
			haz cosas
		} while (condicion verdera);

	*/

	do {
		c--;
	} while (c>0);
	//Imprimirá "c: -1" porque resta 1 a c (valía 0) y luego comprueba la condición
	std::cout << "c do-while: "<< c << "\n";
	return 0;
}