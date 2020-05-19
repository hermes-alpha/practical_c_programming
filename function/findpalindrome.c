/* Find out whether the entered number is a
 * palindrome or not */

#include <stdio.h>
#include <math.h>

#define MAX 10

int top = -1;
int stack[MAX];
void push();
int pop();

int findpalindrome(int);


void main()
{
	int n;

	printf("Enter a number ");
	scanf("%d", &n);

	if (findpalindrome(n))
		printf("%d is a palindrome number", n);
	else
		printf("%d is not a palindrome number", n);
}

int findpalindrome(int numb)
{
	int j, remainder;
	int value = 0, count = 0;
	int temp = numb;

	while (numb > 0) {
		remainder = numb % 10;
		push(remainder);
		numb = numb / 10;
	}

	while(top >= 0) {
		j = pop();
		value += j * pow(10, count); 
		count++;
	}

	if (temp == value) return 1;
	else return 0;
}

void push(int m)
{
	top++;
	stack[top] = m;
}

int pop() {
	int j;
	if (top == -1) 
		return top;
	else {
		j = stack[top];
		top--;
		return j;
	}
}
