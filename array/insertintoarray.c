#include <stdio.h>

#define MAX 100


void main()
{
	int p[MAX] = {0,};
	int n, i, k, j;

	printf("Enter length of array:");
	scanf("%d", &n);

	printf("Enter %d elements of array\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		//scanf("%d\n", p + i);
		printf("input: %d", p[i]);
	}

	printf("\nThe array is:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", p[i]);
	}

	printf("\nEnter position where to insert:");
	scanf("%d", &k);
	k--;

	for (j = n; j >= k; --j) {
		p[j + 1] = p[j];
	}

	printf("\nEnter the value to insert:");
	scanf("%d", &p[k]);

	printf("\nArray after instertion of element:\n");
	for (i = 0; i <= n; i++) {
		printf("%d\n", p[i]);
	}
}
