#include <stdio.h>

#define MAX	255

void main()
{
	char str[MAX];
	int i = 0;

	printf("Enter a sentence: ");
	fgets(str, MAX, stdin);

	while (str[i] != '\0') { 
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
				str[i] == 'o' || str[i] == 'u') {
			str[i] = str[i] - 32;
		}
		i++;
	}

	printf("The sentence after converting vowels into uppercase is: \n");
	fputs(str, stdout);
}
