/*
 ============================================================================
 Name        : clase1.c
 Author      : santiago
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SALUDO "hola mundo ecplise\n" //SIN ;

int main(void) {
	setbuf(stdout, NULL);
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int numero;

	float pi = 3.14;

	char c = 'a';


	printf(SALUDO);

	printf("hola mundo eclipse\n");



	numero= 1;



	printf("\n el numero int es : %d, pi: %f y el char es %c\n\n", numero, pi, c);

	printf("Ingrese un numero: ");

	scanf("%d",&numero);

	printf("\nEl numero ingresado es: %d", numero);



	return EXIT_SUCCESS;
}
