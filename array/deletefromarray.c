#include <stdio.h>

void main()
{
	int p[100], i, n, a;

	printf("Enter the length of the array: ");
	scanf("%d", &n);

	printf("Enter %d elements of the array \n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	printf("The array is:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", p[i]);
	}

	printf("Enter the position/location to delete:");
	scanf("%d", &a);
	a--;

	for (i = a; i < n - 1; i++) {
		p[i] = p[i + 1];
	}
	p[n - 1] = 0;

	printf("Array after deleting the element is\n");
	for (i = 0; i < n - 1; i++) {
		printf("%d\n", p[i]);
	}
}
