//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#include "Videojuego.h"

Videojuego::Videojuego() {
    this -> codigo = "Undefined";
    this -> nombre = "Undefined";
    this -> codigo = "Undefined";
    this -> nivelDificultad = 0;
}

Videojuego::Videojuego(string codigo, string nombre, string genero, int nivelDificultad) {
    this -> codigo = codigo;
    this -> nombre = nombre;
    this -> genero = genero;
    this -> nivelDificultad = nivelDificultad;
}
void Videojuego::mostrar() {
    cout << codigo <<" | "<< nombre <<" | "<< genero <<" | "<< nivelDificultad << endl; ;
}