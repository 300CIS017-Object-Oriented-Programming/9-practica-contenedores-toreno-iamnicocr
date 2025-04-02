//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <string>
#include <iostream>
using namespace std;

class Videojuego {
  private:
  string codigo;
  string nombre;
  string genero;
  int nivelDificultad;
  public:
   Videojuego();
   Videojuego(string, string, string, int);
   void mostrar();
    string getCodigo();
};



#endif //VIDEOJUEGO_H
