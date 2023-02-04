#include <iostream>
#include <cstring> // for using strcpy function
using namespace std;
#define MAX 100
char arr[MAX];
int top = -1;

// function declaration

void push(char st[], char);
char pop(char st[]);
void infix_to_postfix(char source[], char target[]);
int getpriority(char);
bool isOperator(char c);
bool isOperand(char c);

int main()
{
    char infix[100];
    char postfix[100];
    cout << "Enter the infix expression" << endl;
    gets(infix);         // gets bina loop ghumaye pura expression input krlega
    strcpy(postfix, ""); // postfix ko null assign kiya (empty string typess!)
    infix_to_postfix(infix, postfix);
    cout << "The corresponding postfix expression is:" << endl;
    puts(postfix);
    return 0;
}

void infix_to_postfix(char source[], char target[])
{
    int i = 0;
    int j = 0; // i for source(infix)  and j for target(postfix)
    char temp;
    strcpy(target, "");

    while (source[i] != '\0') // jab tak infix expression khtm nhi ho jata
    {
        if (source[i] == '(') // opening bracket aaye to sidha stack me push krdo
        {
            push(arr, source[i]);
            i++;
        }

        else if (source[i] == ')') // closing mile to -> jab tk opening bracket na aaye tb tk saare element pop krke target me daal do
        {
            while ((top != -1) && (arr[top] != '('))
            {
                target[j] = pop(arr);
                j++;
            }
            if (top == -1)
            {
                cout << "Invalid Expression" << endl;
                exit(1); // failure termination of program
            }
            temp = pop(arr); // opening bracket hatane ke liye
            i++;
        }
        else if (isOperand(source[i])) // for checking the given character is operand or not
        {
            target[j] = source[i]; // operand aaye to sidha target me daaldo -> operand and stack ka koi lena dena nhi
            j++;
            i++;
        }
        else if (isOperator(source[i])) // for checking the given character is operator or not
        {
            while ((top != -1) && (arr[top] != '(') && (getpriority(arr[top]) > getpriority(source[i]))) // important!!
            {
                target[i] = pop(arr); // aane vaale ki priority jyaada hai to usse pehle ke operators ko pop krke target me dal do
                j++;
            }
            push(arr, source[i]);
            i++;
        }
        else
        {
            cout << "Incorrect element in expression" << endl;
            exit(1);
        }
    }
    while ((top != -1) && (arr[top] != '('))
    {
        target[j] = pop(arr);
        j++;
    }
    target[j] = '\0';
}

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool isOperand(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getpriority(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;

    else
        return 0;
}

void push(char arr[], char var)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = var;
    }
}

char pop(char arr[])
{
    char val = ' ';
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        val = arr[top];
        top--;
    }
    return val;
}
