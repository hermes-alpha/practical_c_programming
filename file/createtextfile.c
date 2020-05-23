#include <string.h> 
#include <stdio.h> 
#include <stdlib.h>

#define MAX 255

void main (int argc, char* argv[]) 
{
	char str[MAX];
	FILE *fp;

	fp = fopen(argv[1], "w"); 
	if (fp == NULL) {
		perror("An error occurred in creating the file\n"); 
		exit(1); 
	} 

	printf("Enter content for the file\n");
	fgets(str, MAX, stdin);
	while(strcmp(str, "stop\n") != 0) {
		fputs(str, fp);
		fgets(str, MAX, stdin);
	} 

	fclose(fp);
} 
