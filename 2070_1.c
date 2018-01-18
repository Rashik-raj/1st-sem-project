#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10]="PULCHOWK";
    int i,j;
    for(i=0;i<8;i++)
    {
       for(j=0;j<=i;j++)
       {
           if(i%2!=0)
           {
               printf("%c",a[j]);
           }
           else
           {
               if(j%2!=0)
               {
                   printf("%c",a[j]+32);
               }
               else
               {
                   printf("%c",a[j]);
               }
           }
       }
       printf("\n");
    }
    getch();
}
