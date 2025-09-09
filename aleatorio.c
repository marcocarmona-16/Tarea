#include "aleatorio.h"
#include <stdio.h>
#include <stdbool.h>
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
//Generar valor aleatorio de una carta de baraja inglesa.

int generarvalornumerico() {
    int numero;
    numero=numeroAleatorio(13)+1;
    return numero;
}

void especial(int valor, char palo) {
    switch (valor) {
        case 1:
            printf("Valor A      ");
            break;
        case 11:
            printf("Valor: J      ");
            break;
        case 12:
            printf("Valor: Q     ");
            break;
        case 13:
            printf("Valor: K    ");
            break;
        default:
            printf("Valor: %d    ", valor);
            break;
    }

    switch (palo) {
        case 'C':
            printf("Palo: Corazon");
            break;
        case 'P':
            printf("Palo: Picas");
            break;
        case 'T':
            printf("Palo: Trebol");
            break;
        case 'D':
            printf("Palo: Diamante");
            break;
    }
}

bool Son_iguales(int valor1, int valor2) {
    if (valor1==valor2) {
        printf("TRUE");
    }else {
        printf("FALSE");
    }
    return valor1==valor2;
}

bool palos_iguales(char palo1, char palo2) {
    if (palo1==palo2) {
        printf("TRUE");
    }else {
        printf("FALSE");
    }
    return palo1==palo2;
}