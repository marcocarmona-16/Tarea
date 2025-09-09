//
// Created by Usuario on 9/8/2025.
//
#include <stdbool.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    char palocarta1, palocarta2;
    int valorcarta1, valorcarta2;
    initAleatorio();
    valorcarta1=generarvalornumerico();
    valorcarta2=generarvalornumerico();
    palocarta1=palo_aleatorio();
    palocarta2=palo_aleatorio();
    especial(valorcarta1, palocarta1);
    printf("\n");
    especial(valorcarta2, palocarta2);
    printf("\n");
    palos_iguales(palocarta1, palocarta2);
    return 0;

}