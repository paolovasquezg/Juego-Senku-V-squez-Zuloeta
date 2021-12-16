//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CASIMETRICO_H
#define PROYECTO_VASQUEZ_ZULOETA_CASIMETRICO_H


#include <iostream>
#include <vector>
#include <ctime>
#include "CTablero.h"
#include "CFunciones.h"

using namespace std;


class CAsimetrico: public CTablero {
public:
    CAsimetrico();
    CAsimetrico(float _puntaje, int _dimension, float _factor);
    ~CAsimetrico();
    void imprimir_tablero() override;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CASIMETRICO_H
