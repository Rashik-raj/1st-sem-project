#include<stdio.h>
#include<conio.h>
int checkarmstrong(int );
void main()
{
    int i,a,b,l,s,c=0,result;
    printf("Enter the range:");
    scanf("%d%d",&a,&b);
    l=a>b?a:b;
    s=a<b?a:b;
    for(i=s;i<=l;i++)
    {
        result=checkarmstrong(i);
        if(result==1)
        {
            printf("%d\n",i);
            c++;
        }
    }
    printf("Total no of armstrong no in the given range is %d.",c);
    getch();
}
int checkarmstrong(int i)
{
    int j,rem,sum=0;
    j=i;
    while(i!=0)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
        i=i/10;
    }
    if (sum==j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
