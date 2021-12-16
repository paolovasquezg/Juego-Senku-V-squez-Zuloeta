//
// Created by Usuario on 12/10/2021.
//

#include "CFunciones.h"

string frances[7][7] = {{"x", "x", "◉", "◉", "◉", "x", "x"}, {"x", "◉", "◉", "◉", "◉", "◉", "x"}, {"◉", "◉", "◉", "◉", "◉", "◉", "◉"},
                        {"◉", "◉", "◉", "", "◉", "◉", "◉"}, {"◉", "◉", "◉", "◉", "◉", "◉", "◉"}, {"x", "◉", "◉", "◉", "◉", "◉", "x"},
                        {"x", "x", "◉", "◉", "◉", "x", "x"}};

string aleman[9][9] = { {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},{"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},
                        {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"}, {"◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉"},
                        {"◉", "◉", "◉", "◉", "", "◉", "◉", "◉", "◉"},{"◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉"},
                        {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},  {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},
                        {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"}};

string asimetrico[8][8] = { {"x", "x", "◉", "◉", "◉", "x", "x", "x"},{"x", "x", "◉", "◉", "◉", "x", "x", "x"},
                            {"x", "x", "◉", "◉", "◉", "x", "x", "x"}, {"◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉"},
                            {"◉", "◉", "◉", "", "◉", "◉", "◉", "◉"},{"◉", "◉", "◉", "◉", "◉", "◉", "◉", "◉"},
                            {"x", "x", "◉", "◉", "◉", "x", "x", "x"},  {"x", "x", "◉", "◉", "◉", "x", "x", "x"}};

string ingles[7][7] = {{"x", "x", "◉", "◉", "◉", "x", "x"}, {"x", "x", "◉", "◉", "◉", "x", "x"},
                       {"◉", "◉", "◉", "◉", "◉", "◉", "◉"}, {"◉", "◉", "◉", "", "◉", "◉", "◉"},
                       {"◉", "◉", "◉", "◉", "◉", "◉", "◉"}, {"x", "x", "◉", "◉", "◉", "x", "x"},
                       {"x", "x", "◉", "◉", "◉", "x", "x"}};

string diamante[9][9] = { {"x", "x", "x", "x", "◉", "x", "x", "x", "x"},{"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},
                          {"x", "x", "◉", "◉", "◉", "◉", "◉", "x", "x"}, {"x", "◉", "◉", "◉", "◉", "◉", "◉", "◉", "x"},
                          {"◉", "◉", "◉", "◉", "", "◉", "◉", "◉", "◉"},{"x", "◉", "◉", "◉", "◉", "◉", "◉", "◉", "x"},
                          {"x", "x", "◉", "◉", "◉", "◉", "◉", "x", "x"},  {"x", "x", "x", "◉", "◉", "◉", "x", "x", "x"},
                          {"x", "x", "x", "x", "◉", "x", "x", "x", "x"}};

map <string,int> lynda = {{"A",1,},{"B",2,},{"C",3,},{"D",4,},{"E",5},{"F",6,},{"G",7,},{"H",8,},{"I",9}};

void repetir(int num, string cadena)
{
    for (int i = 0; i < num; i++)
    {
        cout << cadena;
    }
    cout << cadena[0];
    cout << endl;
}

void cursor_forward(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << " ";
    }
}

void inicializar_frances(string frances[7][7],string **&tablero){
    tablero = new string *[7];
    for (int i = 0; i < 7;i++){
        tablero[i] = new string[7];
        for (int j = 0; j < 7; j++){
            tablero[i][j] = frances[i][j];
        }
    }
}

void inicializar_aleman(string aleman[9][9],string **&tablero){
    tablero = new string* [9];
    for (int i = 0; i < 9;i++){
        tablero[i] = new string[9];
        for (int j = 0; j < 9; j++){
            tablero[i][j] = aleman[i][j];
        }
    }
}

void inicializar_asimetrico(string asimetrico[8][8],string **&tablero){
    tablero = new string* [8];
    for (int i = 0; i < 8;i++){
        tablero[i] = new string[8];
        for (int j = 0; j < 8; j++){
            tablero[i][j] = asimetrico[i][j];
        }
    }
}

void inicializar_ingles(string ingles[7][7],string **&tablero){
    tablero = new string* [7];
    for (int i = 0; i < 7;i++){
        tablero[i] = new string[7];
        for (int j = 0; j < 7; j++){
            tablero[i][j] = ingles[i][j];
        }
    }
}

void inicializar_diamante(string diamante[9][9],string **&tablero){
    tablero = new string* [9];
    for (int i = 0; i < 9;i++){
        tablero[i] = new string[9];
        for (int j = 0; j < 9; j++){
            tablero[i][j] = diamante[i][j];
        }
    }
}

void liberar_tablero(string **tablero,int factor){
    for (int i = 0; i < factor;i++){
        delete [] tablero[i];
    }
    delete [] tablero;
    tablero = nullptr;
}

void imagen_inicio(){
    cout << endl;
    int frwd = 25;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 1 || i == 4)
        {
            cursor_forward(28+frwd);
            repetir(3,"+---");
        }
        else
        {
            cursor_forward(20+frwd);
            repetir(7,"+---");
        }

        if (i == 2){
            cursor_forward(20+frwd);
            for (int j = 0; j < 7; j++)
            {
                if (j == 3)
                {
                    cout << "| "
                         << "  ";
                }
                else
                {
                    cout << "| " ;
                    cout << char(254) << " ";
                }
            }
        }
        else{
            cursor_forward(28+frwd);
            for (int j = 0; j < 3; j++)
            {
                cout << "| " ;
                cout << char(254) << " ";
            }
        }
        cout << "|";
        cout << endl;
    }
    cursor_forward(28+frwd);
    repetir(3, "+---");
}

void serie(string imp,int num){
    for (int i = 0; i < num;i++){
        cout << imp;
    }
}

int menu(){
    int opcion = 0;
    int mv = 0;

    while (opcion != 1 && opcion != 2 && opcion != 3){
        system("cls");
        cout << "\n";
        cursor_forward(54+mv); cout << "JUEGO SENKU"; cout << "\n";
        cursor_forward(55+mv); cout << "-:MENU:-"; cout << "\n" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|" << " (1) Empezar nueva partida (1)" << " |" "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(5) ; cout << "(2) Instrucciones (2)"; cursor_forward(5); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|" ;cursor_forward(4); cout << "(3) Salir del juego (3)"; cursor_forward(4); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n" << "\n" << "\n";
        cursor_forward(46+mv); cout << " Seleccione la opcion: "; cin >> opcion;
    }

    return opcion;
}

int tableros_elegir(){
    int opcion = 0;
    int mv = 0;
    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4 && opcion != 5 && opcion != 6){
        system("cls");
        cout << "\n";
        cursor_forward(54+mv); cout << "JUEGO SENKU"; cout << "\n";
        cursor_forward(53+mv); cout << "-:TABLEROS:-"; cout << "\n" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(7); cout << " (1) Frances (1)"; cursor_forward(7); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(7); cout << " (2) Aleman (2)"; cursor_forward(8); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(5); cout << " (3) Asimetrico (3)"; cursor_forward(6); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(7); cout << " (4) Ingles (4)"; cursor_forward(8); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(6); cout << " (5) Diamante (5)"; cursor_forward(7); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n" << "\n" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(2); cout << " (6) Regresar al menu (6)"; cursor_forward(3); cout << " |" << "\n";
        cursor_forward(43+mv); cout << "|"; cursor_forward(31); cout << "|" << "\n";
        cursor_forward(43+mv); cout << "+" ;serie("-",31); cout << "+"; cout << "\n" << "\n" << "\n";
        cursor_forward(46+mv); cout << " Seleccione la opcion: "; cin >> opcion;
    }
    return opcion;
}

void instrucciones(){
    int mv = 0;
    int opcion = 0;

    system("cls");
    cout << "\n";
    cursor_forward(54+mv); cout << "JUEGO SENKU"; cout << "\n";
    cursor_forward(51+mv); cout << "-:INSTRUCCIONES:-"; cout << "\n" << "\n";
    cursor_forward(27+mv); cout << "+" ;serie("-",64); cout << "+"; cout << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(4); cout << " a) Solo se permiten jugadas verticales y horizontales"; cursor_forward(5); cout << " |" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(1); cout << " b) Al realizar una jugada, se mostrara el respectivo mensaje"; cursor_forward(1); cout << " |" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(8); cout << " c) Esta permitido retroceder y rehacer jugadas"; cursor_forward(8); cout << " |" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(1); cout << " d) El juego termina al eliminar todas las fichas excepto una"; cursor_forward(1); cout << " |" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(4); cout << " e) Mientras mayor sea el puntaje, mejor fue la partida "; cursor_forward(3); cout << " |" << "\n";
    cursor_forward(27+mv); cout << "|"; cursor_forward(64); cout << "|" << "\n";
    cursor_forward(27+mv); cout << "+" ;serie("-",64); cout << "+"; cout << "\n" << "\n" << "\n";
    cursor_forward(34+mv); cout << "Para volver al menu ingrese cualquier numero: "; cin >> opcion;
}

void despedida(){
    int opcion = 0;
    int mv = 0;
    system("cls");
    cout << "\n";
    cursor_forward(37+mv); cout << "+" ;serie("-",44); cout << "+"; cout << "\n";
    cursor_forward(37+mv); cout << "|"; cursor_forward(44); cout << "|" << "\n";
    cursor_forward(37+mv); cout << "|"; cursor_forward(1); cout << "Ojala se haya divertido! Nos vemos pronto!"; cursor_forward(1); cout << "|" << "\n";
    cursor_forward(37+mv); cout << "|"; cursor_forward(44); cout << "|" << "\n";
    cursor_forward(37+mv); cout << "+" ;serie("-",44); cout << "+"; cout << "\n" << "\n";
    imagen_inicio();
    cout << "\n" << "\n";
    cursor_forward(40+mv); cout << "Ingrese cualquier numero para salir: "; cin >> opcion;
    system("cls");
}

void senku(){
    int opcion = 0; int modo = 0; int opcion2 = 0;

    while (true){
        if (modo == 0){
            opcion = menu();
            if (opcion == 1){
                opcion = tableros_elegir();
                if (opcion != 6)
                    jugar_senku_1(opcion,modo,opcion2);
            }
            else if (opcion == 2){
                instrucciones();
            }
            else{
                despedida();
                system("cls");
                exit(1);
            }
        }
        else{
            if (opcion == 1 && opcion2 != 2){
                opcion = tableros_elegir();
                if (opcion == 6){
                    modo = 0;
                }
                else{
                    jugar_senku_1(opcion,modo,opcion2);
                }

            }
            else if (opcion2 == 2){
                jugar_senku_1(opcion,modo,opcion2);
            }
            else if (opcion == 3){
                instrucciones();
                modo = 0;
            }
            else{
                despedida();
                system("cls");
                exit(1);
            }
        }
    }
}


void jugar_senku_2(CTablero* &tablero, int &opcion, int &modo, int &opcion2){
    system("cls");

    int bien = 0; int continuar = 0; int mal = 0; int pausa = 0; int retroceder = 0; int pedir = 1; int saltar = 0; int rescate = opcion;
    bool acabar = tablero->acabar_partida(); int op_juego = 0; int y1; int x1; int y2; int x2; float t0, t1; float tiempo = 0;

    string **matriz = nullptr;
    inicializar_frances(frances,matriz);

    t0 = clock(); int contador = 0;

    while (acabar == false) {
        if (bien == 1) {
            bien = 0;
            mal = 0;
            modo = 0;
            opcion2 = 0;
            pausa = 0;
            retroceder = 0;
            pedir = 0;
            saltar = 0;
            op_juego = 0;
            while (op_juego != 1 && op_juego != 2) {
                system("cls");
                cout << "\n";
                cursor_forward(53);
                cout << "JUGADA CORRECTA!";
                cout << "\n" << "\n";
                tablero->imprimir_tablero();
                cout << "\n";
                cursor_forward(44);
                cout << "(1) Desea seguir la partida? (1)" << "\n" << "\n";
                cursor_forward(45);
                cout << "(2) Desea pausar el juego? (2)" << "\n" << "\n" << "\n";
                cursor_forward(49);
                cout << "Seleccione la opcion: ";
                cin >> op_juego;
            }
            if (op_juego == 1) {
                pedir = 1;
            } else {
                pausa = 1;
            }
        } if (mal == 1) {
            bien = 0;
            mal = 0;
            modo = 0;
            opcion2 = 0;
            pausa = 0;
            retroceder = 0;
            pedir = 0;
            saltar = 0;
            op_juego = 0;
            while (op_juego != 1 && op_juego != 2 && op_juego != 3 && op_juego != 4 && op_juego != 5) {
                system("cls");
                cout << "\n";
                cursor_forward(53);
                cout << "JUGADA INVALIDA!";
                cout << "\n" << "\n";
                tablero->imprimir_tablero();
                cout << "\n";
                cursor_forward(44);
                cout << "(1) Desea seguir la partida? (1)" << "\n" << "\n";
                cursor_forward(45);
                cout << "(2) Desea pausar el juego? (2)" << "\n" << "\n";
                cursor_forward(44);
                cout << "(3) Desea cambiar de tablero? (3)" << "\n" << "\n";
                if (contador >= 1) {
                    cursor_forward(44);
                    cout << "(4) Desea reiniciar la partida (4)" << "\n" << "\n";
                } else {
                    cursor_forward(44);
                    cout << "(4) Desea reiniciar la partida (4)" << "\n" << "\n" << "\n";
                }
                if (contador >= 1) {
                    cursor_forward(45);
                    cout << "(5) Desea retroceder jugadas? (5)" << "\n" << "\n" << "\n";
                }
                cursor_forward(49);
                cout << "Seleccione la opcion: ";
                cin >> op_juego;
            }
            if (op_juego == 1) {
                pedir = 1;
            } else if (op_juego == 2) {
                pausa = 1;
            } else if (op_juego == 3) {
                modo = 1;
                opcion = 1;
                acabar = true;
                saltar = 1;
            } else if (op_juego == 4) {
                modo = 1;
                opcion2 = 2;
                opcion = rescate;
                acabar = true;
                saltar = 1;
            } else {
                retroceder = 1;
            }
        }
        if (retroceder == 1) {
            continuar = 1;
            op_juego = 2;
            while (continuar == 1){
                op_juego = 2;
                system("cls"); tablero->disminuir_puntaje();
                cursor_forward(51); cout << "JUGADA RETROCEDIDA!"; cout << "\n" << "\n";
                if (contador == 1){
                    tablero->retr_jugada();
                    tablero->copiar_tablero(matriz);
                    tablero->imprimir_tablero();
                    cursor_forward(40); cout << "No hay mas jugadas para retroceder..." << "\n" << "\n" << "\n";
                    cursor_forward(40); cout << "Ingrese cualquier numero para continuar: "; cin >> op_juego;
                    continuar = 0;
                    contador -= 1;
                }
                else {
                    while (op_juego != 0 && op_juego != 1) {
                        tablero->retr_jugada_plus();
                        tablero->imprimir_tablero();
                        cout << "\n";
                        cursor_forward(40);
                        cout << "Desea retroceder otra jugada?: Si(1) No(0)" << "\n" << "\n" << "\n";
                        cursor_forward(49);
                        cout << " Seleccione la opcion: ";
                        cin >> op_juego;
                        system("cls");
                        if (op_juego == 0) {
                            continuar = 0;
                        }
                    }
                    contador -= 1;
                }
            }
            pedir = 1;
        }

        if (pausa == 1){
            system("cls"); cout << "\n";
            t1 = clock();
            tiempo += t1 - t0;
            cursor_forward(52); cout << "PARTIDA PAUSADA"; cout << "\n" << "\n";
            cursor_forward(35); cout << "Ingrese cualquier numero para retomar el juego: "; cin >> op_juego;

            t0 = clock();
            pedir = 1;
        }
        if (pedir == 1){
            bien = 0; mal = 0; modo = 0; opcion2 = 0; pausa = 0; retroceder = 0; pedir = 0; saltar = 0; op_juego = 0;
            system("cls");
            cout << endl;
            cursor_forward(53); cout << "REALIZAR JUGADA"; cout << "\n" << "\n";
            tablero->imprimir_tablero(); cout << "\n" << "\n";
            cursor_forward(43); cout << "Ingrese origen (columna, fila): "; cin >> x1 >> y1; cout << "\n" << "\n";
            cursor_forward(43); cout << "Ingrese destino (columna, fila): "; cin >> x2 >> y2; cout << "\n" << "\n";
            if (tablero->jugada_correcta(y1-1,x1-1,y2-1,x2-1) == true){
                tablero->hacer_jugada(y1-1,x1-1,y2-1,x2-1);
                tablero->regs_jugadas(y1-1,x1-1,y2-1,x2-1);
                tablero->aumentar_puntaje();
                bien = 1;
                contador += 1;
            }
            else{
                tablero->disminuir_puntaje();
                mal = 1;
            }
        }

        if (acabar == false){
            acabar = tablero->acabar_partida();
        }
    }
    liberar_tablero(matriz,tablero->get_dimension());
    t1 = clock();
    tiempo += (t1 - t0); tiempo = tiempo/60.0;
    tablero->tiempo_final(tiempo);
    if (saltar == 0){
        op_juego = 0;
        while (op_juego != 1 && op_juego != 2 && op_juego != 3 && op_juego != 4 && op_juego != 5){
            system("cls");
            cout << "\n";
            cursor_forward(49); cout << "FELICIDADES: HA GANADO!"; cout << "\n" << "\n";
            cursor_forward(50); cout << "Su puntaje es: "; cout << tablero->get_puntaje() << "\n" << "\n";
            tablero->imprimir_tablero(); cout << "\n";
            cursor_forward(49); cout << "Que desea hacer ahora? " << "\n" << "\n" << "\n";
            cursor_forward(49); cout << "(1) Volver a jugar (1) " << "\n" << "\n";
            cursor_forward(47); cout << "(2) Cambiar de tablero (2) " << "\n" << "\n";
            cursor_forward(45); cout << "(3) Ver las instrucciones (3) " << "\n" << "\n";
            cursor_forward(50); cout << "(4) Ir al menu (4) " << "\n" << "\n";
            cursor_forward(48); cout << "(5) Salir del juego (5) " << "\n" << "\n" << "\n";
            cursor_forward(48); cout << "Seleccione la opcion: "; cin >> op_juego;
        }

        if (op_juego == 1){
            modo = 1;
            opcion2 = 2;
        }
        else if (op_juego == 2){
            modo = 1;
            opcion = rescate;
            opcion2 = 2;
        }
        else if (op_juego == 3){
            modo = 1;
            opcion = 3;
        }
        else if (op_juego == 4){
            modo = 0;
        }
        else{
            modo = 1;
            opcion = 4;
        }
    }
    system("cls");
}

