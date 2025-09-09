#include <stdio.h>
#include "aleatorio.h"

char palo_aleatorio();

int main(void) {
    initAleatorio();
    char palito;
    int maximo= 4;
    palito=palo_aleatorio();
    printf("palo aleatorio: %c", palito);
    return 0;
}
