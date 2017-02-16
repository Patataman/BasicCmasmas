
#include <iostream> //Lo importo por si acaso, nunca se sabe.

class nombre {
	//A continuación se define todo lo que será accesible por el usuario.
	public:
		//Variables
		int num;

		//Constructor
		nombre(int num) {
			nombre::num = num;
		}
		/*
			Para acceder a las variables sería
			<Clase>::<Nombre de variable>
		*/
		//función
		int factorial(int num){
			if (num <= 1){
				//Return indica que devuelve algo.
				//En este caso un 1
				return 1;
			} else {
				return num*factorial(num-1);
			}
		}

		void print() {
			std::cout << nombre::num << "\n";
		}

		void cabecera();

	//Cosas que queremos que el usuario no toque, será accesible sólo por la clase
	//private:
};


/*
	Se pueden declarar las cabeceras de los métodos dentro de la clase 
	y posteriormente definir fuera de la misma lo que hacen los métodos.
*/

void nombre::cabecera(){
	std::cout << "Esto se ha definido fuera, y funciona igual \n";
}

int main() {
	nombre pepe = nombre(12);
	pepe.print();
	pepe.cabecera();
	return 0;
}