//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#include "Jugador.h"

Jugador::Jugador(string nombre, int ranking) {
  this->nickname = nombre;
  this->nivelRanking = ranking;
}

void Jugador::mostrar(){
  cout << "-----Informacion de Jugador-----" << endl;
  cout << "Jugador: " << nickname << endl;
  cout << "Ranking: " << nivelRanking << endl;
  cout << "Videojuegos: ";
  for (int i = 0; i < videoJuegosInscritos.size(); i++){
    cout << "- " << videoJuegosInscritos[i] << endl;
  }
}