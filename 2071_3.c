#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],temp;
    int i=0,j=0;
    printf("Enter the string:");
    gets(a);
    while(a[j]!='\0')
    {
        j++;
    }
    printf("The length of the string is %d.\n",j);
    j--;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The reverse string is %s.",a);
    getch();
}
