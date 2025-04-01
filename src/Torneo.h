//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#ifndef TORNEO_H
#define TORNEO_H
#include "Jugador.h"
#include "Videojuego.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;


class Torneo {
private:
  map<string, Videojuego*> videoJuegosDisponibles;
  map<string, Jugador*> jugadoresRegistrados;

  public:
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideoJuego();
    void mostrarVideojuegosDeJugador();
    void inicializarVideoJuegos();
    void inicializarJugadores();
};



#endif //TORNEO_H
