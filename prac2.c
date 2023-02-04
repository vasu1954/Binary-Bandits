#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 3

int a[max],top=-1;

void post()
{



}

int main()
{
    int ch;
    string c;
    gets(c);

    do
    {   printf("Which operation You want to DO::\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.peep\n");
	printf("4.update\n");
	printf("5.Display\n");
	printf("6.Exit\n");
	scanf("%d",&ch);

       switch(ch)
      {

       case 1:

                push();
                break;

       case 2:

                pop();
                break;

       case 3:

                peep();
                break;

       case 4:
               update();
                break;

       case 5:

                Display();
                break;

       case 6:

                break;

       default:

                 printf("Invalid Value");
                    break;
      }
    }
    while(ch!=6);



    getch();


}

