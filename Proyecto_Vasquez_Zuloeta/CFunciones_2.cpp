//
// Created by Usuario on 12/13/2021.
//

#include "CFunciones_2.h"

void jugar_senku_1(int &opcion, int &modo, int &opcion2){

    string **matriz = nullptr;
    if (opcion == 1){
        CTablero *tablero = new CFrances(0,7,8360);
        inicializar_frances(frances,matriz);
        tablero->inicializar_tablero(matriz);
        liberar_tablero(matriz,tablero->get_dimension());
        jugar_senku_2(tablero,opcion,modo,opcion2);
        delete tablero;
    }
    else if (opcion == 2){
        CTablero *tablero = new CAleman(0,9,6840);
        inicializar_aleman(aleman,matriz);
        tablero->inicializar_tablero(matriz);
        liberar_tablero(matriz,tablero->get_dimension());
        jugar_senku_2(tablero,opcion,modo,opcion2);
        delete tablero;
    }
    else if (opcion == 3){
        CTablero *tablero = new CAsimetrico(0,8,7920);
        inicializar_asimetrico(asimetrico,matriz);
        tablero->inicializar_tablero(matriz);
        liberar_tablero(matriz,tablero->get_dimension());
        jugar_senku_2(tablero,opcion,modo,opcion2);
        delete tablero;
    }
    else if (opcion == 4){
        CTablero *tablero = new CIngles(0,7,9405);
        inicializar_ingles(ingles,matriz);
        tablero->inicializar_tablero(matriz);
        liberar_tablero(matriz,tablero->get_dimension());
        jugar_senku_2(tablero,opcion,modo,opcion2);
        delete tablero;
    }
    else{
        CTablero *tablero = new CDiamante(0, 9, 7524);
        inicializar_diamante(diamante,matriz);
        tablero->inicializar_tablero(matriz);
        liberar_tablero(matriz,tablero->get_dimension());
        jugar_senku_2(tablero,opcion,modo,opcion2);
        delete tablero;
    }
}
