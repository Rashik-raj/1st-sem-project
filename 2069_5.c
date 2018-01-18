#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fp;
	long int num[1000];
	int c=0,i;//to count total no of input
	char a;
	clrscr();
	do
	{
		c++;
		printf("\nEnter a no:");
		scanf("%ld",&num[c]);
		printf("DO YOU WANT TO ENTER MORE NUMBERS(Y/N)");
		a=getche();
	}while(a=='Y'||a=='y');
	for(i=1;i<=c;i++)
	{
		if(num[i]%2==0)
		{
			fp=fopen("EVEN.txt","a");
			fprintf(fp,"%ld",num[i]);
			fclose(fp);
		}
		else
		{
			fp=fopen("ODD.txt","a");
			fprintf(fp,"%ld",num[i]);
			fclose(fp);
		}
	}
	getch();
}
