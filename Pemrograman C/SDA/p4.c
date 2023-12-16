#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

void push(char);
char pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);

int main()
{
    printf("Masukkan notasi aritamtika: ");
    fgets(infix, MAX, stdin);

    inToPost();
    printf("Ekspresi postfix setara dengan: %s\n", postfix);
    return 0;
}

void inToPost()
{
    int i, j=0;
    char simbol;
    char next;
    for (i=0; i<strlen(infix); i++)
    {
        simbol = infix[i];
        if(!space(simbol))
        {
            switch (simbol)
            {
                case '(':
                    push(simbol);
                    break;

                case ')':
                    while ((next=pop()) != '(')
                        postfix[j++]=next;
                    break;
                case'+':
                case'-':
                case'*':
                case'/':
                case'^':
                    while (! isEmpty() && precedence(stack[top]) >= precedence(simbol))
                        postfix[j++] = pop();
                    push(simbol);
                    break;
                default:
                    postfix[j++]=simbol;
            }
        }
    }
    while (!isEmpty())
        postfix[j++] = pop();
    postfix[j] = '\0';
}

int space(char c)
{
    if(c == ' ' || c == '\t')
        return 1;
    else
        return 0;
}

int precedence (char simbol)
{
    switch (simbol)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        break;
    }
}

void print()
{
    int i=0;
    printf("Ekspresi postfix setara dengan: ");
    while (postfix[i])
    {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}

void push(char c)
{
    if(top == MAX - 1)
    {
        printf("Tumpukan sudah meluap");
        return;
    }
    top++;
    stack[top] = c;
}

char pop()
{
    char c;
    if(top == -1)
    {
        printf("Tumpukan belum meluap");
        exit(1);
    }
    c = stack[top];
    top = top -1;
    return c;
}

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
