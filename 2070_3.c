#include<stdio.h>
#include<conio.h>
struct date
{
    int day;
    int month;
    int year;
}a;
void main()
{
    printf("ENTER THE DATE IN BS:\n");
    printf("ENTER THE DAY:");
    scanf("%d",&a.day);
    printf("ENTER THE MONTH:");
    scanf("%d",&a.month);
    printf("ENTER THE YEAR:");
    scanf("%d",&a.year);
    if(a.day<18)
    {
        a.day+=30;
        a.month--;
    }
    a.day-=17;
    if(a.month<9)
    {
        a.month+=12;
        a.year--;
    }
    a.month-=8;
    a.year-=56;
    printf("THE CONVERTED DATE IN AD IS:\n");
    printf("Day=%d Month=%d Year=%d",a.day,a.month,a.year);
    getch();
}
