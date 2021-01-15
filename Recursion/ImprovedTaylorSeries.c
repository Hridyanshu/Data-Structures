//Taylor series using recursion improved version

#include<stdio.h>

double series(int x, int n)
{
	static double term = 1;
	if(n==0)
		return term;
	else
		term = 1 + (x*term)/n;
	series(x,n-1);
}

int main()
{
	int x,n;
	printf("Enter the power of e: ");
	scanf("%d", &x);
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("e raised to the power %d: %lf", x, series(x,n));
	return 0;
}
