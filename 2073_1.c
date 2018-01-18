#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20]="Programming";
    int len,i,j,c=0;
    len=strlen(a);
    for(i=1;i<=6;i++)
    {
        for(j=c;j<len;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
        c++;
        len--;
    }
    getch();
}
