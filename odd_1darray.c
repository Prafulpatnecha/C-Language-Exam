#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n,n1;
	printf("Enter The Value Of First N : ");
	scanf("%d",&n1);
	printf("Enter The Value Of Secand N : ");
	scanf("%d",&n);
	int i,a[n],o=0;
	printf("Odd :\n");
	for(i=n1; i<n; i++)
	{
		if(i%2!=0)
		{
			a[o]=i;
			printf("Array[%d] : %d\n",o,a[o]);
			o++;
		}
	}
}
