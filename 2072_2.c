#include<stdio.h>
#include<conio.h>
int calcsum(int );
void main()
{
    int a,sum;
    printf("Enter any 5  digit no:");
    scanf("%d",&a);
    sum=calcsum(a);
    printf("The sum of them is %d",sum);
    getch();
}
int calcsum(int b)
{
     if (b!=0)
    {
        return (b%10 + calcsum(b/10));
    }
    else
    {
       return 0;
    }
}
