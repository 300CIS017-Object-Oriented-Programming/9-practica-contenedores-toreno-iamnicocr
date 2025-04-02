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


}
void Torneo::registrarJugador(){
    string nick, game;
    bool flag = false;
    cout << "Indique el codigo del jugador a registrar \n";
    cin >> nick;

    for(auto it = jugadoresRegistrados.begin(); it != jugadoresRegistrados.end(); ++it) {
        Jugador* player = it->second;
        if (player->getNick() == nick) {
            flag = true;
        }
    }
    if (flag) {
        cout <<"El usuario no existe \n";

    while(flag) {
        cout << "Indique el codigo del juego \n";
        cin >> game;

        for(auto it = videoJuegosDisponibles.begin(); it != videoJuegosDisponibles.end(); ++it) {
            Videojuego* juego = it ->second;
            if (juego->getCodigo() == game) {
                flag = false;
            }
        if (not flag) {

            }

        }
    }


}
void Torneo::inscribirJugadorEnVideoJuego(){

}
void Torneo::mostrarVideojuegosDeJugador() {

}
void TorneoinicializarVideoJuegos(){

}
void inicializarJugadores(){

}

