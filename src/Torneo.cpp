//
// Created by Nicolas Carillo Romo on 1/04/25.
//

#include "Torneo.h"
void Torneo::registrarVideojuego() {
    string codigo, nombre, genero;
    int nivelDificultad = 0;
    int size = videoJuegosDisponibles.size();
    cout << "Indique el codigo del videojuego: \n";
    cin >> codigo;
    cout << "Indique el nombre del videojuego: \n";
    cin >> nombre;
    cout << "Indique el genero del videojuego: \n";
    cin >> genero;
    while (nivelDificultad<1 || nivelDificultad>5) {
        cout << "Indique el nivel de dificultad (1-5): \n";
        cin >> nivelDificultad;
    }
    Videojuego *gameTemp = new Videojuego(codigo, nombre, genero, nivelDificultad);
    videoJuegosDisponibles[] = gameTemp;

}
void Torneo::registrarJugador(){
    string player, game;
    bool flag = true;
    cout << "Indique el codigo del jugador a registrar \n";
    cin >> player;

    while(flag) {
        cout << "Indique el codigo del juego \n";
        cin >> game;

        for (int i=0; i < videoJuegosDisponibles.size(); i++) {

        }
    }


}
void Torneo::inscribirJugadorEnVideoJuego(){

}
void Torneo::mostrarVideojuegosDeJugador() {

}
void TorneoinicializarVideoJuegos(){

};
void inicializarJugadores(){

};

