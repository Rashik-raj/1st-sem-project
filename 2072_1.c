#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=1,sum=0;
    printf("ENTER THE NO:");
    scanf("%d",&a);
    do
    {
        sum=sum+i;
        i++;
    }while(sum<a);
    if(sum==a)
    {
        printf("IT IS TRIANGULAR NO.");
    }
    else
    {
        printf("IT IS NOT A TRIANGULAR NO.");
    }
    getch();
}
