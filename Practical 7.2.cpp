/*Evaluate Infix expression into Postfix expression.*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define MAX 100
void push(float stack[], float value);
float pop(float stack[]);
float EvaluatePostfix(char infix[]);
int top = -1;
float stack[MAX];
int main()
{
	float ans;
	char postfix[MAX] = "";
	printf("Enter the Postfix expression :");
	gets(postfix);
	ans = EvaluatePostfix(postfix);
	printf("\nAnswer = %0.2f",ans);
	
}
float EvaluatePostfix(char postfix[])
{
	float value1,value2,value3;
	int i=0;
	while(postfix[i] != '\0')
	{
		if(isdigit(postfix[i]))
		{
			push(stack,(float)(postfix[i]-'0'));
		}
		else
		{
			value1 = pop(stack);
			value2 = pop(stack);
			switch(postfix[i])
			{
				case '+':
					value3 = value2 + value1;
					break;
				case '-':
					value3 = value2 - value1;
					break;
				case '*':
					value3 = value2 * value1;
					break;
				case '/':
					value3 = value2 / value1;
					break;
				case '%':
					value3 = (int)value2 % (int)value1;
					break;
				case '$':
					value3 = pow(value2,value1);
					break;
			}
			push(stack,value3);
		}
		i++;
	}
	return (pop(stack));
}
void push(float stack[], float value)
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
float pop(float stack[])
{
	float value = -1;
	if(top == -1)
		printf("\n STACK UNDERFLOW");
	else
	{
		value = stack[top];
		top--;
	}
	printf("%d",value);
	return value;
}

