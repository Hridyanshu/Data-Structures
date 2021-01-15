//fibonacci series using recursion

#include<stdio.h>

int fibonacci(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return (fibonacci(n-1)+fibonacci(n-2));	
}

int main()
{
	int n;
	printf("Enter the term: ");
	scanf("%d", &n);
	printf("Term %d of fibonacci series: %d", n,fibonacci(n));
	return 0;
}
