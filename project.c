#include<conio.h>
#include<stdio.h>
#include<string.h>
void home()
{
    printf("\t\t\tWELCOME TO QUESTION BANK");
    printf("\n--------------------------------------------------------------------------------");
    printf("\n\n\n\n");
    printf("\t\t\tPROJECT DONE BY:\n\n");
    printf("\t\t\tRASHIKRAJ SHRESTHA\n\n");
    printf("\t\t\tBIBEK SUBEDI\n\n");
    printf("\t\t\tBATCH 2073/BCT\n\n");
    printf("\t\t\t1st semester\n\n");
    printf("\n\t\t\tPRESS ANY KEY TO CONTINUE:::");
    getch();
}
int disp_content(int );//display the questions
void sol_2069(int );//display solution from 2069
void sol_2070(int );//display solution from 2070
void sol_2071(int );//display solution from 2071
void sol_2072(int );//display solution from 2072
void sol_2073(int );//display solution from 2073
void write_ans(char filename[10] );//read files and write the content in console
void main()
{
	int choose=0,s;
	char exit_choose;
	char filename[10];
	home();
	system("cls");
	b:
	strncpy(filename, "year\0", 10);//display the list of year
	write_ans(filename);
	printf("\n--------------------------------------------------------------------------------");
	printf("\nCHOOSE THE YEAR:");
	a:
	scanf("%d",&choose);
	s=disp_content(choose);
	if(s==1)
	{
	    goto a;//re-ask to choose year
	}
	printf("\n\nDO YOU WANT TO EXIT(Y/N)?");
	exit_choose=getche();
	if(exit_choose=='N' || exit_choose=='n')
	{
		goto b;//restarts the program
	}
}
disp_content(int choose)//display the questions
{
	char choose1;//ask to get solution or not
	int qchoose;//ask to choose question no
	char ask,filename[10];//to store filename
	display:
	switch (choose)
	{
		case 1:
			strncpy(filename, "2069\0", 10);
	   		write_ans(filename);
			printf("\n\nDO YOU WANT TO GET THE SOLUTION?(Y/N)");
			choose1=getche();
			if(choose1=='y' || choose1=='Y')
			{
                   do
                   {
                   printf("\n\nSelect the question no:");
			       scanf("%d",&qchoose);
                   }while(qchoose>5);
			       sol_2069(qchoose);
			}
			break;
		case 2:
			strncpy(filename, "2070\0", 10);
	   		write_ans(filename);
			printf("\n\nDO YOU WANT TO GET THE SOLUTION?(Y/N)");
			choose1=getche();
			if(choose1=='y' || choose1=='Y')
			{
			    do
                {
				printf("\n\nSelect the question no:");
				scanf("%d",&qchoose);
				}while(qchoose>4);
				sol_2070(qchoose);
			}
			break;
		case 3:
			strncpy(filename, "2071\0", 10);
	   		write_ans(filename);
			printf("\n\nDO YOU WANT TO GET THE SOLUTION?(Y/N)");
			choose1=getche();
			if(choose1=='y' || choose1=='Y')
			{
			    do
                {
				printf("\n\nSelect the question no:");
				scanf("%d",&qchoose);
				}while(qchoose>5);
				sol_2071(qchoose);
			}
			break;
		case 4:
			strncpy(filename, "2072\0", 10);
	   		write_ans(filename);
			printf("\n\nDO YOU WANT TO GET THE SOLUTION?(Y/N)");
			choose1=getche();
			if(choose1=='y' || choose1=='Y')
			{
			    do
                {
				printf("\n\nSelect the question no:");
				scanf("%d",&qchoose);
				}while(qchoose>5);
				sol_2072(qchoose);
			}
			break;
		case 5:
			strncpy(filename, "2073\0", 10);
	   		write_ans(filename);
			printf("\n\nDO YOU WANT TO GET THE SOLUTION?(Y/N)");
			choose1=getche();
			if(choose1=='y' || choose1=='Y')
			{
				do
                {
				printf("\n\nSelect the question no:");
				scanf("%d",&qchoose);
				}while(qchoose>5);
				sol_2073(qchoose);
			}
			break;
		default:
			printf("\nPLEASE SELECT THE YEAR:\n");
			return 1;
	}
	printf("\n\nDO YOU WANT TO GET BACK TO QUESTIONS(Y/N)?");//asking to get back to question or not
    ask=getche();
    if(ask=='y' || ask=='Y')
	{
	       goto display;//redisplay the questions
	}
	return 0;
}
void sol_2069(qchoose)
{
    char filename[10];
	switch (qchoose)
	{
	case 1:
	    strncpy(filename, "2069_1.c\0", 10);
	    write_ans(filename);
	    break;
	case 2:
	    strncpy(filename, "2069_2.c", 10);
	    write_ans(filename);
	    break;
	case 3:
	    strncpy(filename, "2069_3.c", 10);
	    write_ans(filename);
	    break;
	case 4:
	    strncpy(filename, "2069_4.c", 10);
	    write_ans(filename);
	    break;
	case 5:
	    strncpy(filename, "2069_5.c", 10);
	    write_ans(filename);
	    break;
	}
}
void sol_2070(qchoose)
{
	char filename[10];
	switch (qchoose)
	{
	case 1:
            strncpy(filename, "2070_1.c", 10);
            write_ans(filename);
            break;
	case 2:
            strncpy(filename, "2070_2.c", 10);
            write_ans(filename);
            break;
	case 3:
            strncpy(filename, "2070_3.c", 10);
            write_ans(filename);
            break;
	case 4:
            strncpy(filename, "2070_4.c", 10);
            write_ans(filename);
            break;
	}
}
void sol_2071(qchoose)
{
	char filename[10];
	switch (qchoose)
	{
	case 1:
            strncpy(filename, "2071_1.c", 10);
            write_ans(filename);
            break;
	case 2:
            strncpy(filename, "2071_2.c", 10);
            write_ans(filename);
            break;
	case 3:
            strncpy(filename, "2071_3.c", 10);
            write_ans(filename);
            break;
	case 4:
            strncpy(filename, "2071_4.c", 10);
            write_ans(filename);
            break;
	case 5:
            strncpy(filename, "2071_5.c", 10);
            write_ans(filename);
            break;
	}
}
void sol_2072(qchoose)
{
	char filename[10];
    switch (qchoose)
	{
	case 1:
            strncpy(filename, "2072_1.c", 10);
            write_ans(filename);
            break;
	case 2:
            strncpy(filename, "2072_2.c", 10);
            write_ans(filename);
            break;
	case 3:
            strncpy(filename, "2072_3.c", 10);
            write_ans(filename);
            break;
	case 4:
            strncpy(filename, "2072_4.c", 10);
            write_ans(filename);
            break;
	case 5:
            strncpy(filename, "2072_5.c", 10);
            write_ans(filename);
            break;
	}
}
void sol_2073(qchoose)
{
	char filename[10];
	switch (qchoose)
	{
	case 1:
            strncpy(filename, "2073_1.c", 10);
            write_ans(filename);
            break;
	case 2:
            strncpy(filename, "2073_2.c", 10);
            write_ans(filename);
            break;
	case 3:
            strncpy(filename, "2073_3.c", 10);
            write_ans(filename);
            break;
	case 4:
            strncpy(filename, "2073_4.c", 10);
            write_ans(filename);
            break;
	case 5:
            strncpy(filename, "2073_5.c", 10);
            write_ans(filename);
            break;
	}
}
void write_ans(char filename[10])
{
    FILE *fp;
    system("cls");
    char c;
    fp = fopen(filename,"r");
    do
    {
         c = getc(fp);
         putchar(c);
    }while(c != EOF);
    fclose(fp);
}
