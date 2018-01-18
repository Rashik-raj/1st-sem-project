#include<stdio.h>
#include<conio.h>
int checkprime(int a)
{
	int c=0,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	return c;
}
void main()
{
    int a,result;
    printf("Enter any no:");
    scanf("%d",&a);
    result=checkprime(a);
    if(result==2)
    {
	printf("%d is prime no.",a);
    }
    else
    {
	printf("%d is not prime no.",a);
    }
    getch();
}
