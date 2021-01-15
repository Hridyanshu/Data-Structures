//solving tower of hanoi

#include<stdio.h>

void towerofHanoi(int n, int A, int B, int C)
{
	//n refers to the number of disks
	//A,B and C are the tower names assumed to be integers.
	//A is source, C is destination.
	if(n>0)
	{
		towerofHanoi(n-1,A,C,B);
		printf("- Move disk from %d to %d\n" ,A, C);
		towerofHanoi(n-1,B,A,C);
	}
}

int main()
{
	int n;
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	printf("To transfer the disks from 1 to 3 follow these steps: \n");
	towerofHanoi(n,1,2,3);
	return 0;
}
