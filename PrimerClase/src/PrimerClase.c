/*
 ============================================================================
 Name        : PrimerClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

	setbuf(stdout, NULL);

	int nros[3];
	int segundo;

	for(int i = 0; i <3; i++){

		printf("Ingresa numero");
		scanf("%d", &nros[i]);


	}

	if(nros[0] > nros[1]){
		if(nros[0] < nros[2]){
			segundo = nros[0];
		}
		else{
			if(nros[1] > nros[2]){
				segundo = nros[1];
			}
			else{
				segundo = nros[2];
			}
		}
	}
	else{
		if(nros[1] < nros[2]){
			segundo = nros[1];
		}
		else{
			if(nros[0] > nros[2]){
				segundo = nros[0];
			}
			else{
				segundo = nros[2];
			}
		}
	}


	printf("El numero del medio es %d", segundo);
	return EXIT_SUCCESS;
}
