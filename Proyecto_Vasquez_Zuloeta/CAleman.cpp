//
// Created by Usuario on 12/10/2021.
//

#include "CAleman.h"

CAleman::CAleman() {};

CAleman::CAleman(float _puntaje,int _dimension, float _factor): CTablero(_puntaje,_dimension, _factor){}

CAleman::~CAleman(){};

void CAleman::imprimir_tablero() {
    cout << endl;
    int mv = 30;
    int frwd = 0;
    int rep = 0;
    int esp = 0;
    int suma = 0;
    for (int i = 0; i < dimension+1; i++)
    {
        if (i != 3 && i != 4 && i != 5 && i != 6)
        {
            frwd = 24;
            rep = 3;
        }
        else
        {
            frwd = 12;
            rep = 9;
        }

        if (i == 0)
        {
            cursor_forward(10 + mv);
            printf("    1   2   3   4   5   6   7   8   9" "\n");
        }
        cursor_forward(frwd + mv);
        repetir(rep, "+---");

        if (i != 9)
        {
            if (i != 3 && i != 4 && i != 5)
            {
                frwd = 24;
                esp = 3;
                suma = 3;
            }
            else
            {
                frwd = 12;
                esp = 9;
                suma = 0;
            }

            cursor_forward(9 + mv);
            cout << i + 1;
            cursor_forward(frwd - 10);
            for (int j = 0; j < esp; j++)
            {
                if (tablero[i][j + suma] == "◉")
                {
                    cout << "| ";
                    cout << char(254) << " ";
                }
                else if (tablero[i][j + suma] != "x")
                {
                    cout << "|   ";
                }
                else
                {
                    cout << "    ";
                }
            }
            if (i != 9)
                cout << "|";
            cout << endl;
        }
    }
}