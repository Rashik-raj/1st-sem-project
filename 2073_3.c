#include<stdio.h>
#include<conio.h>
int armstrong(int num);
void main()
{
   int num, n;
   printf("\n Enter a number to check armstrong: ");
   scanf("%d",&num);
   n=armstrong(num);
   if(n==num)
   {
       printf("\n%d is armstrong number",num);
   }
   else
   {
       printf("\n%d is not armstrong number",num);

   }getch();
}
int armstrong(int num)
{
    int s=0;
    if(num)
    {
      s = ((num%10)*(num%10)*(num%10)) + armstrong(num/10);
    }
    return s;
}
