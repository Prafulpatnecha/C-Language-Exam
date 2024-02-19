#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j;
	char a[500];
	printf("Enter The Characters : ");
	gets(a);
	int ct=0;
	int n=strlen(a);
	int b[n+50];
	for(i=0; i<n; i++)
	{
		b[i]=-1;
	}
	for(i=0; i<n; i++)
	{
		ct=1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				ct++;
				b[j]=0;
			}
		}
		if(b[i]!=0)
		{
			b[i]=ct;
		}
	}
	for(i=0; i<n; i++)
	{
		if(b[i]!=0)
		{
			printf("%c ---> %d\n",a[i],b[i]);
		}
	}
}

