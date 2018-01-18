#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    char address[20];
    int marks;
};
int checkresult(int );
void main()
{
    struct student s[1000];
    char a,b;
    int c=0,i,result;
    do
    {
        c++;
        printf("ENTER STUDENT NAME:");
        scanf("%s",&s[c].name);
        printf("ENTER ROLL NO:");
        scanf("%d",&s[c].roll);
        printf("ENTER ADDRESS:");
        scanf("%s",&s[c].address);
        printf("ENTER TOTAL MARK OUT OF 800:");
        scanf("%d",&s[c].marks);
        printf("DO YOU WANT TO ADD MORE DATA(Y/N):");
        scanf("%c%c",&b,&a);
    }while(a=='Y'||a=='y');
    printf("\nNAME\tROLL\tADDRESS\tMARKS\n");
    for(i=1;i<=c;i++)
    {
        result=checkresult(s[i].marks);
        if(result==1)
        {
            printf("%s\t%d\t%s\t%d\n",s[i].name,s[i].roll,s[i].address,s[i].marks);
        }
    }
    getch();
}
int checkresult(int x)
{
    if(x>=350)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
