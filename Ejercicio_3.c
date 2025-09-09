//
// Created by Usuario on 9/8/2025.
//
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int numero=generarvalornumerico();
    char palo=palo_aleatorio();
    especial(numero, palo);


    return 0;
}