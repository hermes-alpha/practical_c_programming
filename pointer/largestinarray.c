#include <stdio.h>

#define MAX 100

void main()
{
	int p[MAX], i, n, *ptr, *mx;

	printf("How many elements are there? ");
	scanf("%d", &n);

	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);

	mx = p;
	ptr = p;

	for (i = 1; i < n; i++) {
		if (*mx < *ptr)
			mx = ptr;

		ptr++;
	}

	printf("Largest value is %d\n", *mx);
}
