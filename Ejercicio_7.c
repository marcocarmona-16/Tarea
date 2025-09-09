//
// Created by Usuario on 9/8/2025.
//
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int valorcarta1, valorcarta2, valorcarta3;
    char palocarta1, palocarta2, palocarta3;
    palocarta1=palo_aleatorio();
    palocarta2=palo_aleatorio();
    palocarta3=palo_aleatorio();
    valorcarta1=generarvalornumerico();
    valorcarta2=generarvalornumerico();
    valorcarta3=generarvalornumerico();
    especial_invertidos(valorcarta1, palocarta1);
    printf("\n");
    especial_invertidos(valorcarta2, palocarta2);
    printf("\n");
    especial_invertidos(valorcarta3, palocarta3);
    printf("\n");
    int suma;
    suma=valorcarta1+valorcarta2+valorcarta3;
    printf("La suma de las cartas es: %d", suma);
    return 0;
}