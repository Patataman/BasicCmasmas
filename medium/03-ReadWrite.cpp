/* Este archivo es específico de UNIX.
   Si usais Windows, mala elección ya que esta es la interfaz que proporciona.

	int open(ruta [, flags, mode]) abre un fichero existente o lo crea y abre si no existe
		* ruta: ruta del fichero
		* flags: Tenemos:
			- O_CREATE: Crea el archivo (por defecto)
			- O_RDONLY: Abre un fichero para solo lectura
			- O_WRONLY: Abre un fichero para solo escritura
			- O_RDWR: Abre el fichero para lectura/escritura
			- O_TRUNC: Trunca el fichero (lo vacía)
			- Hay más flags, pero estas son las más usadas.
		* mode: Sólo si es O_CREATE, indica los permisos. Normalmente indicado en octal
		Devuelve un descriptor de fichero o -1 si error.

	ssize_t read(descriptor, buffer, count) lee datos de un fichero abierto
		* descriptor: de fichero devuelto por la llamada open
		* buffer: Buffer de datos donde guardar lo leído. Es un puntero.
		* count: De tipo size_t (puede ser entero), indica cuanto bytes máximos se pueden leer.
		Devuelve el número de bytes leidos, 0 si acaba y -1 si da error.

	ssize_t write(descriptor, buffer, count) escribe datos de un fichero abierto
		Todos los parámetros son iguales que en read. Salvo que buffer aquí son los datos
		a escribir.
		Devuelve el número de bytes escritos o -1 si falla.

	close(descriptor)
		Cierra un descriptor abierto. Es importante cerrar el fichero cuando dejamos de utilizarlo.
		Devuelve 0 si exito y -1 si falla

*/

#include <iostream> //Para los cout
#include <vector>

//Para el open, etc y los flags
#include <sys/stat.h>
#include <fcntl.h>

//Para el read/write
#include <unistd.h>


int main (){
	/*
		Vamos a abrir/crear un fichero llamado "patata" en el que escribamos
		"patata" 1 vez en 5 lineas.
	*/
	//Se genera un archivo para escritura, lo truncamos por si acaso y se dan permisos.
	int fd = open("patata", O_CREAT | O_TRUNC | O_WRONLY, 0660);
	//En fd se guarda el descriptor, que lo vamos a necesitar siempre
	//Y se hace comprobación de errores, ya que es lo correcto
	if (fd == -1){//error
		std::cout << "Error al abrir el fichero\n";
		return 1;
	}
	ssize_t res;
	//Escribe 5 veces
	for (int i=0; i<5;i++){
		//Mientras pueda escribir y no de error, escribe.
		res = write(fd, "patata\n", 7); //6 de patata + 1 del salto de linea.
		if (res == -1){
			std::cout << "Error al escribir en el fichero\n";
			return 1;
		}
	}
	if (close(fd) != 0){
		std::cout << "Error al cerrar el fichero\n";
		return 1;
	}

	//Volvemos abrirlo, pero sólo para leer.
	//Esto se podría ahorrar si no se hubiese abierto sólo de escritura antes
	fd = open("patata", O_RDONLY);


	//obtenemos el tamaño del fichero, para saber cuánto leer.
	struct stat st;
	stat("patata", &st);
	ssize_t size = st.st_size;

	//Creamos un vector del tamaño del archivo
	char contenido[size];

	res = read(fd, contenido, size);
	if(res == -1){
		std::cout << "Error al leer el fichero\n";
		return 1;
	}
	std::cout << "El contenido es:\n";
	for(char n : contenido) {
        std::cout << n;
    }

	if (close(fd) != 0){
		std::cout << "Error al cerrar el fichero\n";
		return 1;
	}

	return 0;
}
