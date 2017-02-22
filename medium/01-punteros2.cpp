#include <iostream>
#include <vector>

/*
	Dado que hay mucho sobre punteros, pues mejor separarlo en dos.

	Otra forma de usar arrays/listas es mediante la clase "vector"
	http://en.cppreference.com/w/cpp/container/vector
*/
int main () {

	std::vector<int> v(5); 			//Crea un vector/lista de 5 elementos de tipo entero, por defecto con valor 0 (o eso parece, mejor no fiarse)
	std::vector<int> v2{1,2,45,6}; 	//Crea un vector/lista de 4 elementos, concretamente el 1, 2, 45 y 6.

	/*
		la clase "vector" ofrece la ventaja de que gestiona él solo la memoria, 
		por lo que no hay que preocuparse de los new/malloc y delete/free
	*/

	//Si queremos introducir nuevos elementos en las listas...
	v2.push_back(99);	//Introduce al final
	v2.insert(v2.begin(),23);	//Introduce 23 al principio. Para más info, mirad la docu, que es bastante más extenso
	//Obtener primer elemento
	v2.front();
	//Obtener último elemento
	v2.back();
	//obtener tamaño
	v2.size();
	//Conocer si está vacío
	v2.empty();
	//Si queremos eliminar una posición en concreto
	v2.erase(v2.begin());	//Elimina el 23. La posición debe ser de tipo "iterator" (mirad docu)
	//Si queremos eliminar el último elemento
	v2.pop_back();	//Eliminaría el 6

	std::cout << "V: ";
	for(int n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
	std::cout << "V2: ";
	for(int n : v2) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
	//Si queremos intercambiar vectores
	v2.swap(v);	//Intercambiaría v y v2.
	std::cout << "V: ";
	for(int n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
	std::cout << "V2: ";
	for(int n : v2) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

	return 0;
}

/*
	Usar vectores facilita la vida por permite no fijarse en la gestión de la memoria.
	Por contra, es algo más lento que gestionar la memoria uno mismo.
*/