//
// Created by Usuario on 12/10/2021.
//

#include "CTablero.h"

CTablero::CTablero(){};

CTablero::CTablero(float _puntaje,int _dimension,float _factor):puntaje(_puntaje),dimension(_dimension),factor(_factor){}

CTablero::~CTablero(){};

void CTablero::inicializar_tablero(string **_tablero){
    tablero = new string*[dimension];
    for (int i = 0; i < dimension;i++){
    tablero[i] = new string[dimension];
        for (int j = 0; j < dimension;j++){
        tablero[i][j] = _tablero[i][j];
        }
    }
}

void CTablero::liberar_tablero(){
    for (int i = 0; i < dimension;i++){
        delete [] tablero[i];
    }
    delete [] tablero;
    tablero = nullptr;
};

void CTablero:: disminuir_puntaje(){
    puntaje -= factor;
}

void CTablero::aumentar_puntaje() {
    puntaje += factor;
}

void CTablero::tiempo_final(float tiempo){
    puntaje -= tiempo;
}

void CTablero::copiar_tablero(string** _tablero) {
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            tablero[i][j] = _tablero[i][j];
        }
    }
}

string** CTablero::get_tablero() {
    return tablero;
}

void CTablero::hacer_jugada(int y1, int x1,int y2, int x2){
    int x3, y3;
    if (abs(x1-x2) == 0){
    x3 = x2;
    y3 = (y1 + y2)/2;
    }
    else{
    y3 = y2;
    x3 = (x1 + x2)/2;
    }

    tablero[y1][x1] = "";
    tablero[y3][x3] = "";
    tablero[y2][x2] = "◉";
}

bool CTablero::jugada_correcta(int y1, int x1, int y2, int x2) {
    int x3, y3;

    if (y1 < 0 || x1 < 0 || y2 < 0 || x2 < 0){
        return false;
    }
    else if (x1 > dimension - 1 || y1 > dimension - 1 || x2 > dimension - 1 || y2 > dimension - 1){
        return false;
    }
    else if (tablero[y2][x2] == "x" || tablero[y1][x1] == "x"){
        return false;
    }
    else if (tablero[y2][x2] != "" || tablero[y1][x1] != "◉")
    {
        return false;
    }
    else if (abs(x1-x2) != 2 && abs(y1-y2) != 2){
        return false;
    }
    else{
        if (abs(x1-x2) == 2){
            if (abs(y1-y2) != 0){
                return false;
            }
        }
        else{
            if (abs(x1-x2) != 0){
                return false;
            }
        }
    }

    if (abs(x1-x2) == 0){
        x3 = x2;
        y3 = (y1 + y2)/2;
    }
    else{
        y3 = y2;
        x3 = (x1 + x2)/2;
    }

    if (tablero[y3][x3] == ""){
        return false;
    }

    return true;
}

void CTablero::imprimir_tablero() {}

bool CTablero::acabar_partida() {
    int cont = 0;
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            if (tablero[i][j] == "◉"){
                cont += 1;
            }
        }
    }
    if (cont == 1){
        return true;
    }
    else{
        return false;
    }
}

int CTablero::get_dimension() {
    return dimension;
}

float CTablero::get_puntaje() {
    return puntaje;
}

void CTablero::regs_jugadas(int y1, int x1, int y2, int x2) {
    int x3, y3;
    if (abs(x1-x2) == 0){
        x3 = x2;
        y3 = (y1 + y2)/2;
    }
    else{
        y3 = y2;
        x3 = (x1 + x2)/2;
    }

    jugadas.push_back(y1); jugadas.push_back(x1); jugadas.push_back(y2); jugadas.push_back(x2); jugadas.push_back(y3); jugadas.push_back(x3);
}

void CTablero::retr_jugada_plus(){

    tablero[jugadas[jugadas.size()-2]][jugadas[jugadas.size()-1]] = "◉";
    tablero[jugadas[jugadas.size()-4]][jugadas[jugadas.size()-3]] = "";
    tablero[jugadas[jugadas.size()-6]][jugadas[jugadas.size()-5]] = "◉";

    for (int i = 0; i < 6;i++){
        jugadas.pop_back();
    }

}

void CTablero::retr_jugada(){
    for (int i = 0; i < 6;i++){
        jugadas.pop_back();
    }
}

