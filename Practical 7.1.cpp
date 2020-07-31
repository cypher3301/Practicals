/*Converting Infix expression into Postfix expression*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define MAX 10000
char stack[MAX];
int top = -1;
void push(char stack[], char value);
char pop(char stack[]);
void InfixtoPostfix(char infix[], char postfix[]);
int getpriority(char op);
char postfix[MAX];
int main()
{
	char infix[MAX]= "";
	printf("\n Enter any Infix Expression :");
	gets(infix);
	InfixtoPostfix(infix, postfix);
	printf("\nThe corresponding postfix Experssion is :");
	puts(postfix);
	return 0;
}
void InfixtoPostfix(char infix[], char postfix[])
{
	int i=0, j=0,temp;
	while(infix[i] != '\0')
	{
		if(infix[i] == '(')
		{
			push(stack,infix[i]);
			i++;
		}
		else if (infix[i] == ')' )
		{
			while((top != -1) && (stack[top] != '('))
			{
				postfix[j] = pop(stack);
				j++;
			}
			if(top == -1)
			{
				printf("\n INCORRECT EXPERSSION");
			}
			temp = pop(stack);
			i++;
		}
		else if (isalpha(infix[i]) || isdigit(infix[i]))
		{
			postfix[j] = infix[i];
			i++;
			j++;
		}
		else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '%' )
		{
			while((top != -1) && (stack[top] != '(') && getpriority(stack[top])>=getpriority(infix[i]))
			{
				postfix[j] = pop(stack);
				j++;
			}
			push(stack,infix[i]);
			i++;
		}
		else if(infix[i] == '$')
		{
				push(stack,infix[i]);
				i++;
		}
		else
		{
			printf("\n INCORRECT ELEMENT IN EXPRESSION");
		}
	}
	while((top != -1) && (stack[top] != '('))
	{
		postfix[j] = pop(stack);
		j++;
	}
	postfix[j]='\0';
}
int getpriority(char op)
{
	if(op =='$')
		return 2;
	else if (op == '*' || op == '/' || op == '%')
		return 1;
	else if (op == '+' || op == '-')
		return 0;
}
void push(char stack[], char value)
{
	if(top == MAX-1)
	{
		printf("\n STACK OVERFLOW");
	}
	else
	{
		top++;
		stack[top]= value;
	}
}
char pop(char stack[])
{
	char value = ' ';
	if(top == -1)
		printf("\n STACK UNDERFLOW");
	else
	{
		value = stack[top];
		top--;
	}
	return value;
}
