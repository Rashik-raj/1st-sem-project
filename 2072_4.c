#include<stdio.h>
#include<conio.h>
struct estDate
{
    int day;
    int month;
    int year;
}b;
struct college
{
    char name[20];
    struct estDate b;
    char location[20];
}a[10];
void main()
{
    int i;
    printf("ENTER COLLEGE INFO:\n");
    for(i=0;i<10;i++)
    {
        printf("\nENTER NAME:");
        scanf("%s",&a[i].name);
        printf("ENTER ESTABLISHED DATE:\n");
        printf("ENTER DAY:");
        scanf("%d",&a[i].b.day);
        printf("ENTER MONTH:");
        scanf("%d",&a[i].b.month);
        printf("ENTER YEAR:");
        scanf("%d",&a[i].b.year);
        printf("ENTER LOCATION:");
        scanf("%s",&a[i].location);
    }
    printf("\nCOLLEGE RECORD\n");
    printf("NAME\tESTABLISHED DATE\tLOCATION");
    for(i=0;i<10;i++)
    {
        printf("\n%s",a[i].name);
        printf("\t%d/%d/%d",a[i].b.day,a[i].b.month,a[i].b.year);
        printf("\t\t\t%s",a[i].location);
    }
    getch();
}
