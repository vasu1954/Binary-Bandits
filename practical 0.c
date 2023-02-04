#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;

do{    printf("Entet the value of a and b\n");
    scanf("%d""%d",&a,&b);

    printf("Choose the operation given below\n");
    printf("1.Addition\n2.subtraction\n3.multiplication\n4.divison\n5.Remandor\n6.Exit\n");
    scanf("%d",&c);

   switch(c)
    {
        case 1:{printf("%d + %d=%d\n",a,b,(a+b));
        break;}
        case 2:{printf("%d-%d=%d",a,b,(a-b));
        break;}
        case 3:{printf("%d*%d=%d",a,b,(a*b));
        break;}
        case 4:{printf("%d/%d=%d",a,b,(a/b));
        break;}
        case 5:{printf("%d%%d=%d",a,b,(a%b));
        break;}
        case 6:{break;}

        default:printf("you entered the wrong choice");
        break;
   }}
   while(c!=6);
   getch();


}
