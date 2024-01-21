#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *ca;
	ca=fopen("Capital.txt","w");
	char a[500];
	printf("Enter Characters To Auto Capital : ");
	gets(a);
	int i,len=strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	puts(a);
	fprintf(ca,"Your Characters Is : %s",a);
}
