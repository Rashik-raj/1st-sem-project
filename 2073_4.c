#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int compare_string(char * ,char *);
void main()
{
    char str1[100], str2[100];
    int r;
    printf("\nEnter two strings :");
    gets(str1);
    gets(str2);
    r=compare_string(str1,str2);
    if(r==1)
    {
        printf("%s is greater than %s",str1,str2);
    }
    else if(r==2)
    {
        printf("%s is greater than %s",str2,str1);
    }
    else
    {
        printf("%s and %s are equal",str1,str2);
    }
    getch();
}
int compare_string(char *a,char *b)
{
    int i=0;
    while(a[i]==b[i]&&a[i]!='\0')
    {
        i++;
    }
    if (a[i]>b[i])
    {
        return 1;
    }
    else if (a[i]<b[i])
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
