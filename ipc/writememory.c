#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
	char *str;
	int shmid;

	key_t key = ftok("sharedmem", 'a');
	if ((shmid = shmget(key, 1024, 0666 | IPC_CREAT)) < 0) {
		perror("shmget");
		exit(1);
	}

	if ((str = shmat(shmid, NULL, 0)) == (char *)-1) {
		perror("shmat");
		exit(1);
	}

	printf("Enter the string to be written in memory: ");
	fgets(str, 1024, stdin);
	printf("String written in memory: %s\n", str);
	shmdt(str);

	return 0;
}
