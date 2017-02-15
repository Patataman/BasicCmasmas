#include <iostream>

/*	Las funciones es algo que ya hemos usado con el main.
	Una función es una sección de código que hace algo específico.
	Tiene un nombre y puede devolver un resultado. De igual forma
	puede recibir una serie de variables o valores.

	Su forma es: 
		tipo_a_devolver nombre ([argumentos]) { cuerpo }
*/

//Función que calcula el factorial de un número.
int factorial (int num) {
	if (num <= 1){
		//Return indica que devuelve algo.
		//En este caso un 1
		return 1;
	} else {
		return num*factorial(num-1);
	}
}

/* A las funciones se les puede pasar variables con:
	copia por valor: sólo copia el valor de la variable,
					 no se modifica la variable fuera de la función
	copia por referencia: copia la variable en si misma. Los cambios 
						  que se realicen en la variable afectará a 
						  la misma fuera de la función.
*/

//En este caso, res es la variable donde se va a guardar el valor.
int factorial2 (int num, int& res) {
	if (num == 1){
		return 1;
	} else {
		res *= num;
		return factorial2(num-1, res);
	}
}

int main () {
	//Imprimirá 120
	std::cout << factorial(5) << "\n";

	int res = 1;
	//Calcula el factorialde 5 y lo guarda en la variable res.
	factorial2(5,res);
	//Imprime también 120.
	std::cout << res << "\n";

	//Esto se entenderá mejor cuando se vean punteros más adelante.
	return 0;
}