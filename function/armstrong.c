/* Finding whether the entered number
 * is an Armstrong number */

#include <stdio.h>
#include <math.h>

#define MAX 10


void push(int);
int pop();
int top = -1;
int stack[MAX];

int findarmstrong(int);

void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (findarmstrong(n)) {
		printf("%d is an armstrong number\n", n);
	}
	else {
		printf("%d is not an armstrong number\n", n);
	}
}

int findarmstrong(int numb)
{
	int j, remainder, temp, value = 0, count = 0;

	temp = numb;

	while (numb > 0) {
		remainder = numb % 10;
		push(remainder);
		count++;
		numb = numb / 10;
	}

	numb = temp;

	while(top >= 0) {
		j = pop();
		value = value + pow(j, count);
	}

	if (value == numb) {
		return 1;
	}
	else {
		return 0;
	}
}

void push(int m)
{
	top++;
	stack[top] = m;
}

int pop()
{
	int j;
	if (top == -1) {
		return top;
	}
	else {
		j = stack[top];
		top--;
		return j;
	}
}
