/*
 ============================================================================
 Name        : Ejercicio02.c
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
	int n;

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

	if(matrizNula(filas,columnas,matriz)==0){
		printf("La matriz es nula");
	}else
		printf("La matriz es válida");
}
