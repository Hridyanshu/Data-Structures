//factorial using recursion

#include<stdio.h>

int factorial(int n)
{
	if(n==1 || n==0)
		return 1;
	else
		return n*factorial(n-1);
}

int main()
{
	int n;
	printf("Enter the number: ");
	//input
	scanf("%d", &n);
	printf("Factorial of %d: %d",n,factorial(n));
	return 0;
}
