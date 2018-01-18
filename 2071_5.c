#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,s,l,i,c=0;
    long int sum=0,ave;
    printf("Enter the range:");
    scanf("%d%d",&m,&n);
    l=m>n?m:n;
    s=m<n?m:n;
    for(i=s;i<=l;i++)
    {
        sum=sum+i;
        c++;
    }
    ave=sum/c;
    printf("THE SUM=%ld AND THE AVERAGE=%ld",sum,ave);
    getch();
}
