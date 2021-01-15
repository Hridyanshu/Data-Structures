//Finding the sum of first n natural numbers using recursion

#include<stdio.h>

int sum(int n)
{
	if(n==1)
		return 1;
	else
		return (n + sum(n-1));
}

int main()
{
	int n;
	printf("Enter the value of n: ");
	//input
	scanf("%d", &n);
	printf("Sum of first %d natural numbers: %d", n,sum(n));
	return 0;
}
