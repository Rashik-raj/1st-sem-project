#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("data.txt","r");
    f2=fopen("record.txt","w");
    do
    {
        ch=fgetc(f1);
        fputc(ch,f2);
    }while(ch!=EOF);
    fclose(f1);
    fclose(f2);
    getch();
}
