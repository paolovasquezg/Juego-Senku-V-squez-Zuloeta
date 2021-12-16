//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CINGLES_H
#define PROYECTO_VASQUEZ_ZULOETA_CINGLES_H

#include <iostream>
#include <vector>
#include <ctime>
#include "CTablero.h"
#include "CFunciones.h"

using namespace std;

class CIngles: public CTablero {
public:
    CIngles();
    CIngles(float _puntaje, int _dimension, float _factor);
    ~CIngles();
    void imprimir_tablero() override;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CINGLES_H
