#include<stdio.h>
#include<conio.h>
float insert();
float best();
float check();
void main()
{
	String name;
	int a,b,c;
	clrscr();
	
	printf("\nEnter the Subject Name :");
	scanf("%s",&name);

	insert();
	check();
	best();
	getch();
}

float insert()
{
	float ca,i;
	for(int i=1;i<=3;i++)
	{
		scanf("%d",&ca[i]);
	
	}
}

float check()
{
	int temp,i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(ca[i]>ca[j])
			{
				temp=ca[i];
				ca[i]=ca[j];
				ca[j]=temp
			}
		}
		for(k=1;k<=2;k++)
		{
			printf("%f",ca[i]);
		}
	}
}

float best()
{
		for(k=1;k<=2;k++)
		{
			sum=sum+ca[k];
			consider=sum/3;
			printf("%f",consider);
		}
	
}
