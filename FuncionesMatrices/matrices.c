/*
 * matrices.c
 *
 *  Created on: 17 nov 2023
 *      Author: usuario
 */
#include "matrices.h"
#include <stdio.h>
void pedirMatriz(int filas, int columnas, int matriz[][MAX]){
	int i,j;

	for (i = 0; i < filas; ++i) {
		for (j = 0; j < columnas; ++j) {
			printf("Introduce el elemento (%d,%d)",i,j);
			fflush(stdout);
			scanf("%d",&matriz[i][j]);
		}
	}
}

void mostrarMatriz(int filas, int columnas, int matriz[][MAX]){
	int i,j;

	for (i = 0; i < filas; ++i) {
		for (j = 0; j < columnas; ++j) {
			printf("%5d",matriz[i][j]);

		}
		printf("\n");
	}
}

int devuelveMenor(int filas, int columnas, int matriz[][MAX]){
	int menor=matriz[0][0];
	int i,j;
	for (i = 0; i < filas; ++i) {
		for (j = 0; j < columnas; ++j) {
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
			}
		}
	}
	return menor;
}

void igualar(int filas, int columnas, int matriz[][MAX],int n){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			matriz[i][j]=n;
		}
	}
}

int matrizNula(int filas, int columnas, int matriz[][MAX]){
	int i,j;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(matriz[i][j]!=0){
				return 1;
			}
		}
	}return 0;
}
