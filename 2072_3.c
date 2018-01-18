#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,s;
    printf("ENTER THE NO FOR 3*3 MATRIX:");
    for(i=0;i<3;i++)//take input
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    s=a[1][1];
   for(i=0;i<3;i++)//check smallest value
    {
        for(j=0;j<3;j++)
        {
            s=s<a[i][j]?s:a[i][j];
        }
    }
    for(i=0;i<3;i++)//rep;lace main diagonal by smallest value
    {
        for(j=0;j<3;j++)
        {
            if(j-i==0)
            {
                a[i][j]=s;
            }
        }
    }
    printf("MATRIX AFTER REPLACING MAIN DIAGONAL BY SMALLEST NO IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}
