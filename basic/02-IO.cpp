#include <iostream> //Para poder tener entrada y salida

//Todo debe estar en un main, como C.
int main() {
	/*	Como se ha visto en el ejemplo anterior,
	  	usamos std::cout para sacar cosas por pantalla
		
		std:: indica que se utiliza la variable cout del
		espacio de nombres std, que es donde se encuentra.
	*/
	std::cout<<"FUNCIONA!\n";

	/*
		De igual forma se podría usar:

			using namespace std;

		Con el que indicamos que a partir de ahora queremos 
		usar el espacio	de nombre std
	*/
	using namespace std;

	cout<<"FUNCIONA SIN EL std::!\n";

	//En este caso podemos usar "string" sin "std::" ya que hemos realizado namespace
	string nombre;
	cout << "DIME TU NOMBRE MORTAL! \n";
	//Guardamos la entrada por teclado en la variable "nombre"
	cin >> nombre;
	//Como se puede apreciar, se concatena con "<<"
	cout << "ODIO A LA GENTE CON NOMBRE " << nombre <<"\n";	

	//Podemos guardar varios valores a la vez, ya que cin sólo
	//guarda hasta que encuentra un espacio.
	cout << "Dime 2 numeros distintos (separados por espacio)\n";
	int a, b;
	cin >> a >> b;
	cout << "Los numeros son " << a <<" y "<< b <<"\n";

	return 0;
}
