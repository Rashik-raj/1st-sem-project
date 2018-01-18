#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,l,s,i;
    printf("ENTER THE RANGE TO DISPLAY THE CHARACTER SET:");
    scanf("%d%d",&a,&b);
    l=a>b?a:b;
    s=a<b?a:b;
    printf("\nTHE CHARACTERS IN BEETWEEN THE GIVEN RANGE IS:\n");
    for(i=s;i<=l;i++)
    {
        printf("%c\t",i);
    }
    getch();
}
