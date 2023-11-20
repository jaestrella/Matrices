/*
 ============================================================================
 Name        : Ejercicio04.c
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
	float matriz[MAX][MAX];

	do{
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
	}while(filas!=columnas);

	printf("Introduce la matriz: ");
	puts("");
	pedirMatrizReales(filas,columnas,matriz);

	printf("Esta es la matriz: ");
	puts("");
	mostrarMatrizReales(filas,columnas,matriz);

	if(triangularSuperior(filas,columnas,matriz)==0){
		printf("NO es una matriz triangular superior.");
	}else
		printf("Es una matriz triangular superior.");
}
