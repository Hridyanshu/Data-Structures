//fibonacci series using recursion improved version (memoisation)

#include<stdio.h>

int fibonacci(int n, int fib[])
{
	if(n==0 || n==1)
	{
		fib[n] = n;
		return n;
	}
	else
	{
		if(fib[n-1] == -1)
			fib[n-1] = fibonacci(n-1, fib);
		if(fib[n-2] == -1)
			fib[n-2] = fibonacci(n-2, fib);
		return (fib[n-1] + fib[n-2]);
	}
}

int  main()
{
	int n,i;
	printf("Enter the number of term: ");
	scanf("%d", &n);
	int fib[n];
	for(i=0;i<n;i++)
		fib[i] = -1;
	printf("Term %d of fibonacci series: %d", n, fibonacci(n,fib));
	return 0;
}
