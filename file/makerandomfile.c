#include <string.h> 
#include <stdio.h> 
#include <stdlib.h>

struct data{                              
	char str[255];
};

void main (int argc, char* argv[]) 
{
	FILE *fp;
 	struct data line;
	int sizeof_data = sizeof(struct data);

 	fp = fopen(argv[1], "wb"); 
  	if (fp == NULL) {
		perror("An error occurred in creating the file\n");
		exit(1);
  	} 

	printf("Enter file content:\n");
	fgets(line.str, sizeof_data, stdin);

  	while (strcmp(line.str, "stop\n") != 0) {
		fwrite(&line, sizeof_data, 1, fp);
		fgets(line.str, sizeof_data, stdin);
	}

  	fclose(fp);
} 
