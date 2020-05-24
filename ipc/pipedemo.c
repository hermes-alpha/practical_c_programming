#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX 50

int main()
{
	char wstr[MAX];
	char rstr[MAX];
	int pp[2];
	pid_t p;

	if (pipe(pp) < 0)
		perror("pipe");

	p = fork();

	if (p >= 0) {
		if (p == 0) {
			printf("Enter the string: ");
			fgets(wstr, MAX, stdin);
			write(pp[1], wstr, strlen(wstr));
			exit(0);
		}
		else {
			read(pp[0], rstr, sizeof(rstr));
			printf("Entered message: %s\n", rstr);
			exit(0);
		}
	}
	else {
		perror("fork");
		exit(2);
	}

	return 0;
}
