#include<stdio.h>
#include<conio.h>
#define max 3

int a[max],top=-1;
void push()
{
    int data;
    if(top>=max-1)
    {
	printf("Stack is overflow");
    }

    else
    {
	printf("Enter value::");
	scanf("%d",&data);
	top++;
	a[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
	printf("Stack is empty");
    }

    else
    {
	printf("\n You delete this element :: %d",a[top]);
	top--;
     }
}

void peep()
{
    int num;
    printf("Enter number of Element");
    scanf("%d",&num);

    printf("Your Element::%d\n",a[top-num+1]);
}


void update()
{
    int temp,nv;
     printf("Enter number of Element you want to change::");
    scanf("%d",&temp);

     printf("Enter new value::");
	scanf("%d",&nv);
	a[top-temp+1]=nv;
}
void Display()
{
	int i;
    if(top>=0)
    {   for(i=top;i>=0;i--)
	 {
	     printf("%d\n",a[i]);

	 }
    }
    else
    {
	printf("Stack is empty");
    }
}

int main()
{
    int ch;

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

