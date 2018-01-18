#include<stdio.h>
#include<conio.h>
void main()
{
    long int sum=0;
    int i,n,a;
    printf("Enter no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=((i*(i+1)/2)*10*i);
        sum=sum+a;
    }
    printf("The sum of the series is %ld.",sum);
    getch();
}
