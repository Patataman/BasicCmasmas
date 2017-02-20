/* Este archivo es específico de UNIX. Si usais Windows, mala elección.

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
		Devuelve un descriptor de fichero.

	int read(descriptor, buffer, count) lee datos de un fichero abierto
		* descriptor: de fichero devuelto por la llamada open
		* buffer: Buffer de datos donde guardar lo leído. Es un puntero.
		* count: De tipo size_t, indica cuanto bytes máximos se pueden leer.
		Devuelve el número de bytes leidos, 0 si acaba y -1 si da error.

	int write(descriptor, buffer, count) escribe datos de un fichero abierto
		Todos los parámetros son iguales que en read. Salvo que buffer aquí son los datos
		a escribir.
		Devuelve el número de bytes escritos o -1 si falla.

	close(descriptor)
		Cierra un descriptor abierto. Es importante cerrar el fichero cuando dejamos de utilizarlo.

*/