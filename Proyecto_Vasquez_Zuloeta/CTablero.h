//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CTABLERO_H
#define PROYECTO_VASQUEZ_ZULOETA_CTABLERO_H

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class CTablero {
protected:
    string **tablero = nullptr;
    float puntaje,factor; int dimension;
    vector<int> jugadas;
public:
    CTablero();
    CTablero(float _puntaje, int _dimension, float _factor);
    virtual ~CTablero();
    void inicializar_tablero(string **_tablero);
    void copiar_tablero(string **_tablero);
    string** get_tablero();
    int get_dimension();
    float get_puntaje();
    void liberar_tablero();
    void disminuir_puntaje();
    void aumentar_puntaje();
    void tiempo_final(float tiempo);
    bool acabar_partida();
    void hacer_jugada(int y1,int x1,int y2, int x2);
    bool jugada_correcta(int y1, int x1, int y2, int x2);
    void regs_jugadas(int y1, int x1, int y2, int x2);
    void retr_jugada_plus();
    void retr_jugada();
    virtual void imprimir_tablero() = 0;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CTABLERO_H
