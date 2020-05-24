#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX 255

int main()
{
	int fw;
	char str[MAX];

	mkfifo("FIFOPipe", 0666);
	fw = open("FIFOPipe", O_WRONLY);

	printf("Enter text: ");
	fgets(str, MAX, stdin);

	write(fw, str, MAX);
	close(fw);	

	return 0;
}
