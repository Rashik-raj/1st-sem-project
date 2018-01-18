#include<conio.h>
#include<stdio.h>
#include<string.h>
struct students
{
    char name[10];
    int roll;
    int age;
};
void main()
{
    struct students s[100],temp;
    int c=0,i,j;
    char a,b;
    do
    {
        c++;
        printf("ENTER THE NAME:");
        scanf("%s",&s[c].name);
        printf("ENTER THE ROLL NO:");
        scanf("%d",&s[c].roll);
        printf("ENTER THE AGE:");
        scanf("%d",&s[c].age);
        printf("DO YO WANT TO ENTER MORE ENTRY(Y/N):");
        scanf("%c%c",&b,&a);
    }while(a=='y'||a=='Y');
    for(i=1;i<=c;i++)
    {
        for(j=i+1;i<=c;j++)
        {
            if(strcmp(s[i].name, s[j].name)>0)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    printf("ARRANGED ALPHABETICALLY ORDER IS:");
    printf("NAME\tROLL\tAGE");
    for(i=1;i<=c;i++)
    {
        printf("%s\t%d\t%d\n",s[i].name,s[i].roll,s[i].age);
    }
    getch();
}
