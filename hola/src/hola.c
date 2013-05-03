/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<commons/temporal.h>
int main(void) {
	char* tiempo=temporal_get_string_time();
	char vector[10];
	strcpy(vector,"Hola mundo");
	vector[10]='!';
	vector[10]='\0';
	puts(tiempo);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	printf("%s\n",vector);
	printf("%d\n",'\0');
	free(tiempo);
	return EXIT_SUCCESS;

}
