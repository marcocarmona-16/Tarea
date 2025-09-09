//
// Created by Usuario on 9/8/2025.
//
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int valorcarta1, valorcarta2, valorcarta3;
    char palocarta1, palocarta2, palocarta3;
    valorcarta1=generarvalornumerico();
    palocarta1=palo_aleatorio();
    valorcarta2=generarvalornumerico();
    palocarta2=palo_aleatorio();
    valorcarta3=generarvalornumerico();
    palocarta3=palo_aleatorio();
    especial(valorcarta1, palocarta1);
    printf("\n");
    especial(valorcarta2, palocarta2);
    printf("\n");
    especial(valorcarta3, palocarta3);
    printf("\n");
    int suma;
    suma=valorcarta1+valorcarta2+valorcarta3;
    printf("La suma de las cartas es: %d", suma);
    return 0;
}