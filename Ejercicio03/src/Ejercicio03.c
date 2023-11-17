/*
 ============================================================================
 Name        : Ejercicio03.c
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
	pedirMatrizReales(filas,columnas,matriz);

	printf("Esta es la matriz: ");
	puts("");
	mostrarMatrizReales(filas,columnas,matriz);

	printf("Introduce un numero: ");
	fflush(stdout);
	scanf("%d",&n);

	if(mismoValor(filas,columnas,matriz,n)==1){
		printf("La matriz tiene todos los valores iguales.");
	}else
		printf("La matriz no tiene todos los valores iguales al numero introducido.");
}
