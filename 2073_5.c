#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char name[20],a;
    char roll[100];
    fp=fopen("record.txt","a+");
    do
    {
        printf("Enter student name:");
        scanf("%s",&name);
        fputs(name,fp);
        printf("Enter roll no:");
        scanf("%s",&roll);
        fprintf(fp,"\t");
        fputs(roll,fp);
        printf("DO YOU WANT TO ADD MORE DATA(Y/N):");
        a=getche();
        fprintf(fp,"\n");
        printf("\n");
    }while(a=='Y'||a=='y');
    fclose(fp);
    getch();
}
