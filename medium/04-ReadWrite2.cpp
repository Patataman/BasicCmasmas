/*
	Al parecer, también se puede hacer gestión de lectura/escritura
	mediante otras funciones propias de C++ y sus librerias.
	El ejemplo anterior sería válido tanto para C y C++ (las funciones).

	ofstream: para escribir
	ifstream: para leer
	fstream: para leer/escribir
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
	//fichero para leer/escribir
	std::fstream fd;
	fd.open("readWrite2", std::ios::in | std::ios::out | std::ios::trunc);
	//Todo ok
	if (fd.is_open()) {
		//Write in file
		fd << "Linea 1\n";
		fd << "Linea 2\n";
		//Para que se escriba, por que se guarda en buffer hasta que se cierra
		fd.close(); 
		fd.open("readWrite2");
		//Read from file
		std::string line;
		while (std::getline(fd,line)) {
			std::cout << line << "\n";
		}
		return 0;
	} else {
		return 1;
	}
}