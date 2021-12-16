//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CDIAMANTE_H
#define PROYECTO_VASQUEZ_ZULOETA_CDIAMANTE_H

#include <iostream>
#include <vector>
#include <ctime>
#include "CTablero.h"
#include "CFunciones.h"

class CDiamante: public CTablero {
public:
    CDiamante();
    CDiamante(float _puntaje, int _dimension, float _factor);
    ~CDiamante();
    void imprimir_tablero() override;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CDIAMANTE_H
