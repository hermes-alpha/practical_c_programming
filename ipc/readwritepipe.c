#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 50

int main()
{
	char str[MAX];
	int pp[2];

	if (pipe(pp) < 0)
		exit(1);

	printf("Enter first message to write into pipe: ");
	fgets(str, MAX, stdin);
	write(pp[1], str, MAX);

	printf("Enter second message to write into pipe: ");
	fgets(str, MAX, stdin);
	write(pp[1], str, MAX);

	printf("Messages read from the pipe are as follows:\n");
	read(pp[0], str, MAX);
	printf("%s\n", str);
	read(pp[0], str, MAX);
	printf("%s\n", str);

	return 0; 
}
