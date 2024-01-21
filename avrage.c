#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
//	Average = (Sum of values)/No.of values
	int n;
	printf("Enter The Value Of N : ");
	scanf("%d",&n);
	int i,j,ck=0,array[n][n];
	float sum;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter The Value Of 2D Array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
			sum=array[i][j]+sum;
			ck++;
		}
	}
	float av=sum/ck;
	printf("Average : %f",av);
}
