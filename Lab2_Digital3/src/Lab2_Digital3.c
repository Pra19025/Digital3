/*
 ============================================================================
 Name        : Lab2_Digital3.c
 Author      : Noel Prado
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	//int var = 0;
	for(int var = 0; var<20; var++){

		printf("%d \n",var);
		fflush(stdout);
		sleep(1);

	}
	puts("!!!Adios!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}