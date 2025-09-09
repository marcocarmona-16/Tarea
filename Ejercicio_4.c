//
// Created by Usuario on 9/8/2025.
//
#include "aleatorio.h"
#include "aleatorio.c"
#include <stdbool.h>

int main() {
    initAleatorio();
    int valorcarta_1, valorcarta_2;
    char palocarta_1, palocarta_2;
    bool es_igual;
    valorcarta_1=generarvalornumerico();
    valorcarta_2=generarvalornumerico();
    palocarta_1=palo_aleatorio();
    palocarta_2=palo_aleatorio();
    especial(valorcarta_1, palocarta_1);
    printf("\n");
    especial(valorcarta_2, palocarta_2);
    printf("\n");
    es_igual=Son_iguales(valorcarta_1,valorcarta_2);
    return 0;
}