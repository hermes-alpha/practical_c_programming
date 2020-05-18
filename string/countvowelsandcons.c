#include <stdio.h>

void main()
{
	char str[255];
	int i = 0, ctrV = 0, ctrC = 0;

	printf("Enter a sentence: ");
	fgets(str, 255, stdin);

	while (str[i] != '\0') {
		if ((str[i] >= 65 && str[i] <= 90) ||
				(str[i] >= 97 && str[i] <= 122)) {

			if (str[i] == 'A' || str[i]	== 'E' || str[i] == 'I' ||
					str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||
					str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
					str[i] == 'u') {
				ctrV++;
			}
			else {
				ctrC++;
			}
		}
		i++;
	}

	printf("Number of vowers are: %d\n Number of consonants are: %d\n",
			ctrV, ctrC);
}
