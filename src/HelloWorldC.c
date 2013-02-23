/*
 ============================================================================
 Name        : HelloWorldC.c
 Author      : Pieter Prinsloo
 Version     : 0.0.1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Main method that gets executed on startup
int main(void) {
	int i;
	for (i = 0; i < 10; i++){
		puts("Hello World ");
	}

	puts("Bye World");
	return EXIT_SUCCESS;
}
