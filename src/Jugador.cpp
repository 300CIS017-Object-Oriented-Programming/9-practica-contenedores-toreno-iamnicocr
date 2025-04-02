//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#include "Jugador.h"

Jugador::Jugador() {
  this->nickname = "Undefined";
  this->nivelRanking = "Undefined";
}

Jugador::Jugador(string nombre, int ranking) {
  this->nickname = nombre;
  this->nivelRanking = ranking;
}

void Jugador::mostrar(){
  cout << "-----Informacion de Jugador-----" << endl;
  cout << "Jugador: " << nickname << endl;
  cout << "Ranking: " << nivelRanking << endl;
  cout << "Videojuegos: " << endl;
  for (int i = 0; i < videoJuegosInscritos.size(); i++){
    cout << "- " << videoJuegosInscritos[i] << endl;
  }
}

string Jugador::getNick() {
  return nickname;
}