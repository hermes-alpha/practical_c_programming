#include <stdio.h>
#include <string.h>

void main()
{
	char str[80], rev[80];
	int n, i, x = 0;

	printf("Enter a string: ");
	scanf("%s", str);

	n = strlen(str);

	for (i = n - 1; i >= 0; i--) {
		rev[x] = str[i];
		x++;
	}

	rev[x] = '\0';

	if (strcmp(str, rev) == 0) {
		printf("The %s is palindrome\n", str);
	}
	else {
		printf("The %s is not palindrome\n", str);
	}
}
