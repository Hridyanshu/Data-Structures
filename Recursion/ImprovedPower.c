//imporoved power function using recursion

#include<stdio.h>

int power(int n, int m)
{
	if(m==0)
		return 1;
	if(m%2==0)
		return power(n*n, m/2);
	else
		return n*power(n*n, (m-1)/2);
}

int main()
{
	int n,m;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the power upto which the number is to be raised: ");
	scanf("%d", &m);
	printf("%d raised to the power %d is: %d", n,m,power(n,m));
	return 0;
}
