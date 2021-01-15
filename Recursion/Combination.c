//combination (nCr) using recursion

#include<stdio.h>

int C(int n, int r)
{
	if(r==0 || r==n)
		return 1;
	else
		return (C(n-1,r-1) + C(n-1,r));
}

int main()
{
	int n,r;
	printf("Enter the total number of objects available: ");
	scanf("%d", &n);
	printf("Enter the number of objects in the selection: ");
	scanf("%d", &r);
	printf("Number of ways: %d", C(n,r));
	return 0;
}
