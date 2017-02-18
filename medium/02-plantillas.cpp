#include <iostream>

/*
	Las plantillas permiten crear clases genéricas, por ejemplo,
	podríamos crearnos nuestra propia clase "vector" usando plantillas
	y que valga para cualquier tipo de C++ o clase que nos definamos.

	Esto permite una alta reutilización y eficiencia en muchos aspectos.
*/

//Definimos un vector genérico
template<class X> class vector {
};

//Ahora podemos crearnos de lo que nos de la gana.

vector<char> vec_char;
vector<int> vec_int;
vector<vector<double>> vec_vec_double;

//Siempre me gusta hacer clases cohetes.
class cohete{
};
//Y ahora podemos hacer vectores de cohete! \O/
vector<cohete> vec_cohete;

/*
	IMPORTANTE: Debemos tener cuidado cuando usamos plantillas y 
	hacer operaciones que sean válidas para todos los tipos. Es decir, 
	evitar sumas o divisiones, porque quizás el usuario sustituye la plantilla
	con un objeto suyo, y hacer sumas de objetos carece de sentido.
*/

int main (){
	return 0;
}