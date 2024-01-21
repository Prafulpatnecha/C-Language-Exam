#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int j,i,k;
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf("_ ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
