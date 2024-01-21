#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n;
	printf("Enter The Value Of Leap Year : ");
	scanf("%d",&n);
	if(n>1999)
	{
		if(n%4==0)
		{
			printf("Leap Year");
		}
		else
		{
			printf("Not Is Leap Year");
		}
	}
	else
	{
		printf("Not Is Leap Year");
	}
}
