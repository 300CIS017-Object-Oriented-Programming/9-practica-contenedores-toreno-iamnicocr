//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <string>
using namespace std;

class Videojuego {
  private:
  string codigo;
  string nombre;
  string genero;
  int nivelDificultad;
  public:
   Videojuego(string, string, string, int);
   void mostrar();
};



#endif //VIDEOJUEGO_H
