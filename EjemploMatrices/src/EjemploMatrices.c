/*
 ============================================================================
 Name        : EjemploMatrices.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"
int main(void) {
	int filas,columnas;
	int matriz[MAX][MAX];

	puts("Programa de ejemplo de matrices");

	do{
		printf("Introduce el numero de filas (Entre 1 y %d):",MAX);
		fflush(stdout);
		scanf("%d",&filas);
	}while(filas<=0 || filas>MAX);

	do{
		printf("Introduce el numero de columnas (Entre 1 y %d):",MAX);
		fflush(stdout);
		scanf("%d",&columnas);
	}while(columnas<=0 || columnas>MAX);

	printf("Introduce la matriz: ");
	puts("");
	pedirMatriz(filas,columnas,matriz);

	printf("Esta es la matriz: ");
	puts("");
	mostrarMatriz(filas,columnas,matriz);

	printf("El menor elemento de la matriz es: %d",devuelveMenor(filas,columnas,matriz));
}
