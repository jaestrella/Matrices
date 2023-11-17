/*
 * matrices.h
 *
 *  Created on: 17 nov 2023
 *      Author: usuario
 */

#ifndef MATRICES_H_
#define MATRICES_H_
#define MAX 30

void pedirMatriz(int filas, int columnas, int matriz[][MAX]);

void mostrarMatriz(int filas, int columnas, int matriz[][MAX]);

int devuelveMenor(int filas, int columnas, int matriz[][MAX]);

void igualar(int filas, int columnas, int matriz[][MAX],int n);

int matrizNula(int filas, int columnas, int matriz[][MAX]);

void pedirMatrizReales(int filas, int columnas, float matriz[][MAX]);

void mostrarMatrizReales(int filas, int columnas, float matriz[][MAX]);

int mismoValor(int filas, int columnas, float matriz[][MAX], int n);

#endif /* MATRICES_H_ */
