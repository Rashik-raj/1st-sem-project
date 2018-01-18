#include<stdio.h>
#include<conio.h>
void main()
{
	const char a[]="pulchowk\0";
	int i,j;
	clrscr;
	for(i=7;i>=0;i--)
	{
		for(j=0;j<=7;j++)
		{
			if(j>=i)
			{
				printf("%c",a[j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
