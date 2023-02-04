#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d=0;

 l1:   printf("\nEnter two value::\n");
    scanf("%d %d",&a,&b);
    if(d!=0)
    {
        goto l2;
    }


do {printf("--->Which arithmatic problem do you want to solve");
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division \n 5.Remainder\n 6.Exit\n");
    scanf("%d",&c);
    if(d!=0){ switch(c)
                    {   case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:{goto l1;}
                        case 6: {goto l2;}
                    }
            }

    int add(int a,int b)
    {
        return a+b;
    };
    int sub(int a,int b)
    {
        return a-b;
    };
    int multi(int a,int b)
    {
        return a*b;
    };
    int div(int a,int b)
    {
        return a/b;
    };
    int rem(int a,int b)
    {
        return a%b;
    };
l2:switch(c)
    {
        case 1: { printf("a+b=%d\n",add(a,b)); break;}
        case 2: { printf("a-b=%d\n",sub(a,b)); break;}
        case 3: { printf("a*b=%d\n",multi(a,b)); break;}
        case 4: { printf("a/b=%d\n",div(a,b)); break;}
        case 5: { printf("a%b=%d\n",rem(a,b)); break;}
        case 6: { break;}
        default : {printf("You Entered Wrong Number\n\n\n"); break;}

    }
    d++;
}
while(c!=6);


 getch();
}
