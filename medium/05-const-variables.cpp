/*
    const indica que algo es constante, por lo tanto, su valor
    no puede cambiar a lo largo de la ejecución.
    
    Este archivo contiene usos y ejemplos de const.
*/

#include <iostream>


int main () {

    //Declaración de un int constante con valor 12.
    //Se debe dar valor al inicializar, ya que luego no se puede modificar.
    const int int_constante = 12;
    int const int_constante2 = 21;

    //int_constante = 14; //esta línea explota ya que intentamos modificar un valor constante
    //int_constante2 = 14; //esta línea explota ya que intentamos modificar un valor constante

    int variable = 1;

    const int *      puntero_a_constante = &int_constante;
          int *const puntero_constante_a_variable = &variable;
    const int *const puntero_constante_a_constante = &int_constante2;
    const int *const puntero_constante_a_constante2 = &variable;

    std::cout << "puntero_a_constante " << *puntero_a_constante << "\n";
    std::cout << "puntero_constante_a_variable " << *puntero_constante_a_variable << "\n";
    std::cout << "puntero_constante_a_constante " << *puntero_constante_a_constante << "\n";
    std::cout << "puntero_constante_a_constante2 " << *puntero_constante_a_constante2 << "\n";

    puntero_a_constante = &int_constante2;
    std::cout << "puntero_a_constante -> apunta a int_constante2 " << *puntero_a_constante << "\n";

    *puntero_constante_a_variable = 90901;
    std::cout << "puntero_constante_a_variable -> cambio de valor " << *puntero_constante_a_variable << "\n";
    //puntero_a_constante = 14; //Explota porque la variable almacenada es constante
    //*puntero_constante_a_constante2 = 14; //Explota porque la variable almacenada es constante
    //puntero_constante_a_constante = &int_constante2; //Explota porque el puntero es constante

    std::cout << "El resto no se puede porque son constantes" << "\n";


    return 0;
}