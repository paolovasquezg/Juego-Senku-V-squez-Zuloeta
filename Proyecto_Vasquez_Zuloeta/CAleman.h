//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CALEMAN_H
#define PROYECTO_VASQUEZ_ZULOETA_CALEMAN_H

#include <iostream>
#include <vector>
#include <ctime>
#include "CTablero.h"
#include "CFunciones.h"

using namespace std;

class CAleman: public CTablero {
public:
    CAleman();
    CAleman(float _puntaje,int _dimension,float _factor);
    ~CAleman();
    void imprimir_tablero() override;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CALEMAN_H
