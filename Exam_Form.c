#include<stdio.h>
#include<conio.h>
#include<string.h>

struct va
{
	int date,age,d,m,y;
	char name[100];
};

void dmy(int n,struct va s1[n],int i)
{
	st:
	printf("Enter Birthdate Date : ");
	scanf("%d",&s1[i].d);
	printf("Enter Birthdate Month : ");
	scanf("%d",&s1[i].m);
	printf("Enter Birthdate Year : ");
	scanf("%d",&s1[i].y);
	if(s1[i].y>=1924 && s1[i].y<=2023)
	{	
		if(s1[i].m>=1 && s1[i].m<=12)
		{
			if(s1[i].m!=2 && s1[i].m!=4)
			{
				if(s1[i].d>=1 && s1[i].d<=31)
				{
					s1[i].age=2024-s1[i].y;
				}
				else
				{
					printf("In Valid Date 1 to 31 only\n");
					goto st;	
				}
			}
			else
			{
				if(s1[i].m!=4)
				{
					if(s1[i].d>=1 && s1[i].d<=28)
					{
						s1[i].age=2024-s1[i].y;
					}
					else
					{
						printf("In Valid Date 1 to 28 only\n");
						goto st;
					}
				}
				else
				{
					if(s1[i].d>=1 && s1[i].d<=30)
					{
						s1[i].age=-2024-s1[i].y;
					}
					else
					{
						printf("In Valid Date 1 to 30 only\n");
						goto st;
					}
				}		
			}
		}
		else
		{
			printf("In Valid Month 1 to 12 only\n");
			goto st;
		}
	}
	else
	{
		if(s1[i].y==2024)
		{
			if(s1[i].m==1)
			{
				if(s1[i].d>=1 && s1[i].d<=20)
				{
					s1[i].age=s1[i].d;
				}
				else
				{
					printf("In Valid Date 1 to 20 only\n");
					goto st;
				}
			}
			else
			{
				printf("In Valid Month 1 only\n");
				goto st;
			}
		}
		else
		{
			printf("In Valid Year 1924 to 2024 only\n");
			goto st;
		}
	}
}

void nam(int n,struct va s1[n],int i)
{
	char name[100];
	char a[10];
	printf("\nForm Is [%d]\n\n",i+1);
	gets(a);
	printf("Enter Name : ");
	gets(name);
	strcpy(s1[i].name,name);
	dmy(n,s1,i);
}
int fileh()
{
	FILE *ok;
	ok=fopen("Format.txt","w");
	return ok;
}
void main()
{
	int n,i=0,j;
	printf("Enter Size Of From N : ");
	scanf("%d",&n);
	struct va s1[n];
	for(i=0; i<n; i++)
	{
		nam(n,s1,i);
	}
	int ok=fileh();
	for(j=0; j<n; j++)
	{
		if(s1[j].y==2024)
		{
			printf("\nForm Is [%d]\n\n",j+1);
			printf("Name : %s\n",s1[j].name);
			printf("Birth Date : %d/%d/%d\n",s1[j].d,s1[j].m,s1[j].y);
			printf("Age : %d Days\n",s1[j].age);
			fprintf(ok,"\nForm Is [%d]\n\n",j+1);
			fprintf(ok,"Name : %s\n",s1[j].name);
			fprintf(ok,"Birth Date : %d/%d/%d\n",s1[j].d,s1[j].m,s1[j].y);
			fprintf(ok,"Age : %d Days\n",s1[j].age);
		}
		else
		{
			printf("\nForm Is [%d]\n\n",j+1);
			printf("Name : %s\n",s1[j].name);
			printf("Birth Date : %d/%d/%d\n",s1[j].d,s1[j].m,s1[j].y);
			printf("Age : %d Year\n",s1[j].age);
			fprintf(ok,"\nForm Is [%d]\n\n",j+1);
			fprintf(ok,"Name : %s\n",s1[j].name);
			fprintf(ok,"Birth Date : %d/%d/%d\n",s1[j].d,s1[j].m,s1[j].y);
			fprintf(ok,"Age : %d Year\n",s1[j].age);
		}
	}
}
