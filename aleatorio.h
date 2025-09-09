//
// Created by Cecilia Curlango on 8/19/25.
//
// Funciones que contienen comportamientos que requiere
// números aleatorios.

#ifndef ALEATORIO_H
#define ALEATORIO_H
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int numeroAleatorio(int maximo);
int numeroAleatorioConRango(int minimo,int maximo);
int lanzarDado();
void initAleatorio();
char palo_aleatorio();

//declaramos la funcion
int generarvalornumerico();
void especial(int valor, char palo);
bool Son_iguales(int valor1, int valor2);
bool palos_iguales(char palo1, char palo2);


#endif //ALEATORIO_H