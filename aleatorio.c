#include "aleatorio.h"
//
// Created by Cecilia Curlango on 8/26/25.
//
/*
 * Regresa un número entre 1 y 6 como si
 * se lanza un dado de 6 caras.
 */
int lanzarDado() {
    return numeroAleatorio(6) + 1;
}
/*
 * Regresa un número aleatorio en el rango de
 * un valor mínimo a uno máximo sin incluir
 * el máximo.
 */
int numeroAleatorioConRango(int minimo, int maximo) {
    int rango = maximo - minimo;
    return numeroAleatorio(rango) + minimo;
}
/*
 * Regresa un número aleatorio en el rango de
 * 0 a uno máximo, sin incluir el máximo.
 */
int numeroAleatorio(int maximo) {
    // initAleatorio();
    return rand()%maximo;
}

/*
 * Inicializa el generador de números aleatorios.
 */
void initAleatorio() {
    srand(time(NULL));
}
/*
 * Genera un lado de una ficha de dominó
 */
int generaLadoFicha() {
    int lado = numeroAleatorio(7);
    return lado;
}

//Generar palo aleatorio
char palo_aleatorio() {
    char palo;
    int numero=numeroAleatorio(4);
    switch (numeroAleatorio(4)) {
        case 0:
            palo='C';
            break;
        case 1:
            palo='P';
            break;
        case 2:
            palo='T';
            break;
        case 3:
            palo='D';
            break;
    }
    return palo;
}