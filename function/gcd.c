#include <stdio.h>

int gcd(int, int);

void main()
{
	int x, y, g;

	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);

	g = gcd(x, y);

	printf(
		"Greatest Common Divisor of %d and %d is %d\n",
		x, y, g
	);
}

int gcd(int a, int b)
{
	int m = a % b;

	if (m == 0) {
		return b;
	}
	else {
		return gcd(b, m);
	}
}
