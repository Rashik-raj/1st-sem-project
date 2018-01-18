#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
	char name[20],address[20];
};
void main()
{
	struct Employee z[1000],temp;
	int c=0,i,j;//c count no of data entered
	char a,b;//b takes enter as input
	do
	{
		c++;
		printf("ENTER NAME OF THE EMPLOYEE:");
		scanf("%s",&z[c].name);
		printf("ENTER ADRESS:");
		scanf("%s",&z[c].address);
		printf("do you have more data(Y/N)?");
		scanf("%c%c",&b,&a);
	}while(a=='Y' || a=='y');
	for(i=1;i<=c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
			if(strcmp(z[i].name, z[j].name)>0)
			{
				temp=z[j];
				z[j]=z[i];
				z[i]=temp;
			}
		}
	}
	printf("\nSORTED IN ASCENDING ORDER ACCORDING TO NAME");
	printf("\nNAME\tADDRESS\n");
	for(i=1;i<=c;i++)
	{
		printf("%s\t%s\n",z[i].name,z[i].address);
	}
	getch();
}

