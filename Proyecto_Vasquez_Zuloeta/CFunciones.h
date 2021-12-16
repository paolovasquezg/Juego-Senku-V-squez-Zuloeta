//
// Created by Usuario on 12/10/2021.
//

#ifndef PROYECTO_VASQUEZ_ZULOETA_CFUNCIONES_H
#define PROYECTO_VASQUEZ_ZULOETA_CFUNCIONES_H


#include <iostream>
#include <vector>
#include <ctime>
#include <map>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "CTablero.h"
#include "CFunciones_2.h"


using namespace std;

extern string frances[7][7];
extern string aleman[9][9];
extern string asimetrico[8][8];
extern string ingles[7][7];
extern string diamante[9][9];

extern map <string,int> lynda;

void repetir(int num, string cadena);
void cursor_forward(int num);

void inicializar_frances(string frances[7][7],string **&tablero);
void inicializar_aleman(string aleman[9][9],string **&tablero);
void inicializar_asimetrico(string asimetrico[8][8],string **&tablero);
void inicializar_ingles(string ingles[7][7],string **&tablero);
void inicializar_diamante(string diamante[9][9],string **&tablero);
void liberar_tablero(string **tablero,int factor);
void imagen_inicio();
void serie(string imp,int num);
int menu();
int tableros_elegir();
void instrucciones();
void despedida();
void senku();
void jugar_senku_2(CTablero* &tablero, int &opcion, int &modo, int &opcion2);

#endif //PROYECTO_VASQUEZ_ZULOETA_CFUNCIONES_H
