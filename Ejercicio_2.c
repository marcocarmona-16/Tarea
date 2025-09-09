//
// Created by Usuario on 9/8/2025.
//
#include <stdio.h>
#include "aleatorio.h"
#include "aleatorio.c"

int main() {
    initAleatorio();
    int numero;
    //Generamos el numero de la carta
    numero=generarvalornumerico();
    printf("Valor numerico de la carta = %d\n",numero);
    return 0;
}