#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Employee
{
	char name[20];
	long int salary;
};
void main()
{
	struct Employee z[1000],temp;
	int c=0,i,j;//c count no of data entered
	char a,b;//b takes enter as input
	clrscr();
	do
	{
		c++;
		printf("ENTER NAME OF THE EMPLOYEE:");
		scanf("%s",&z[c].name);
		printf("ENTER SALARY:");
		scanf("%ld",&z[c].salary);
		printf("do you have more data(Y/N)?");
		scanf("%c%c",&b,&a);
	}while(a=='Y' || a=='y');
	for(i=1;i<=c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
			if(z[i].salary>z[j].salary)
			{
				temp=z[j];
				z[j]=z[i];
				z[i]=temp;
			}
		}
	}
	printf("\nSORTED IN ASCENDING ORDER ACCORDING TO SALARY");
	printf("\nNAME\tSALARY\n");
	for(i=1;i<=c;i++)
	{
		printf("%s\t%ld\n",z[i].name,z[i].salary);
	}
	getch();
}
