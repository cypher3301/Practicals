/*Converting Infix expression into Prefix expression*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
void reversef(char string[]);
void push(char stack[], char value);
char pop(char stack[]);
void InfixtoPostfix(char reverse[], char postfix[]);
int getpriority(char value);
char infix[100], postfix[100], reverse[100];
int main()
{
	printf("\n Enter any infix expression : ");
	gets(infix);
	reversef(infix);
	InfixtoPostfix(reverse, postfix);
	reversef(postfix);
	printf("\n The prefix expression is : ");
	puts(reverse);
	return 0;
}
void reversef(char string[])
{
	int len, i=0,j=0;
	len = strlen(string);
	for(i=0,j=len-1;j>=0;i++,j--)
	{
		if (string[j] == '(')
			reverse[i] = ')';
		else if (string[j] == ')')
			reverse[i] = '(';
		else
			reverse[i] = string[j];
	}
	reverse[i] = '\0';
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
				break;
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
		else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '%')
		{
			while((top != -1) && (stack[top] != '(') && getpriority(stack[top])>getpriority(infix[i]))
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
				break;
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
















