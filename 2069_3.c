#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,j,temp=0;
	clrscr();
	printf("How many no do you want to sort?");
	scanf("%d",&n);
	printf("Enter %d no:",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	printf("Second largest no is %d\n",a[1]);
	getch();
}
