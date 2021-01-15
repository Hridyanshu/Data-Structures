//power of a number using recursion

#include<stdio.h>

int power(int n, int m)
{
	if(m==0)
		return 1;
	else
		return n*power(n,m-1);
}

int main()
{
	int n,m;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the power upto which it is to be raised: ");
	scanf("%d", &m);
	printf("%d raised to the power %d is: %d",n,m,power(n,m));
}
