//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <iostream>
#include <vector>
#include "Videojuego.h"
using namespace std;

class Jugador {
private:
  string nickname;
  string nivelRanking;
  vector<Videojuego*> videoJuegosInscritos;
  public:
    Jugador();
    Jugador(string, int);
    void mostrar();
    string getNick();
};



#endif //JUGADOR_H
