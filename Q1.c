#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n;
	printf("Enter The Value Of N : ");
	scanf("%d",&n);
	int a[n],i,sum=1;
	for(i=1; i<=n; i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
}
