//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CFRANCES_H
#define PROYECTO_VASQUEZ_ZULOETA_CFRANCES_H



#include <iostream>
#include <vector>
#include <ctime>
#include "CTablero.h"
#include "CFunciones.h"

using namespace std;

class CFrances:public CTablero {
public:
    CFrances();
    CFrances(float _puntaje,int _dimension,float _factor);
    ~CFrances();
    void imprimir_tablero() override;
};


#endif //PROYECTO_VASQUEZ_ZULOETA_CFRANCES_H
