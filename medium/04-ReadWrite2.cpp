/*
	Al parecer, también se puede hacer gestión de lectura/escritura
	mediante otras funciones propias de C++ y sus librerias.
	El ejemplo anterior sería válido tanto para C y C++ (las funciones).

	http://www.cplusplus.com/doc/tutorial/files/

	ofstream: Para escribir en ficheros (o de output)
	ifstream: Para leer de ficheros	(i de input)

	flags:
		ios::in -> Para leer, por defecto en ifstream
		ios::out -> Para escribir, por defecto en ofstream
		ios::binary -> Modo binario
		ios::ate -> Se posiciona al final del fichero. Si no, se posiciona al comienzo
		ios::app -> Append
		ios::trunc -> Truncate
*/

#include <iostream>
#include <fstream>

int main () {
	std::ofstream archivo_escritura;
	archivo_escritura.open("patata2"); //Por defecto tiene el modo en escritura.
	//Versión en 1 sola linea:
	//ofstream archivo("patata2", flags);

	//Es correcto comprobar que el fichero esté abierto. No vaya a ser
	//que se intente escribir en un fichero cerrado.
	if (archivo_escritura.is_open()) {
		//Escribir ahora es "mas facil"
		archivo_escritura << "PATATAAAAA\n";
		//Al igual que antes, cuando se deja de usar el fichero, se cierra.
		archivo_escritura.close();
	}

	std::ifstream archivo_lectura("patata2");	
	if (archivo_lectura.is_open()) {
		std::string linea;
		while(getline(archivo_lectura, linea)) {
			std::cout << linea << "\n";
		}
		archivo_lectura.close();
	}
	return 0;
}