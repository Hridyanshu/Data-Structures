//taylor series upto n terms using recursion

#include<stdio.h>

double series(int x, int n)
{
	static double power = 1;
	static double factorial = 1;
	double temp;
	if(n==0)
		return 1;
	else
	{
		temp = series(x, n-1);
		//numerator
		power = power*x;
		//denominator
		factorial = factorial*n;
		return temp+(power/factorial);
	}
}

int main()
{
	int x, n;
	printf("Enter the power of e: ");
	scanf("%d", &x);
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("e raised to the power %d: %lf", x, series(x,n));
	return 0;
}
