#include<stdio.h>

#define MAX 100

int ifexists(int z[], int u, int v)
{
	int i;
	if (u == 0) return 0;
	for (i = 0; i <= u; i++) {
		if (z[i] == v) return 1;
	}
	return 0;
}

void main()
{
	int p[MAX], q[MAX], r[MAX];
	int m, n;
	int i, j, k = 0;
	
	printf("Enter the length of the first array:");
	scanf("%d", &m);

	printf("Enter %d elements of the first array\n", m);
	for (i = 0; i < m; i++) {
		scanf("%d", &p[i]);
	}

	printf("Enter the length of the second array:\n");
	scanf("%d", &n);

	printf("Enter %d elements of the second array\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &q[i]);
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (p[i] == q[j]) {
				if (!ifexists(r, k, p[i])) {
					r[k] = p[i];
					k++;
				}
			}
		}
	}

	if (k > 0) {
		printf("\nThe common elements in the two arrays are:\n");
		for (i = 0; i < k; i++) {
			printf("%d\n", r[i]);
		}
	}
	else {
		printf("There are no common elements in the two arrays\n");
	}
}
