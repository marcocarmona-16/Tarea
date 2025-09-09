//
// Created by Cecilia Curlango on 8/19/25.
//
// Funciones que contienen comportamientos que requiere
// números aleatorios.

#ifndef ALEATORIO_H
#define ALEATORIO_H
#include <stdlib.h>
#include <time.h>
int numeroAleatorio(int maximo);
int numeroAleatorioConRango(int minimo,int maximo);
int lanzarDado();
void initAleatorio();
char palo_aleatorio();

//declaramos la funcion
int generarvalornumerico();

#endif //ALEATORIO_H