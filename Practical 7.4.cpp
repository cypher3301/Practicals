/*Evaluate Infix expression into Prefix expression.*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define MAX 100
void push(float stack[], float value);
float pop(float stack[]);
float Evaluateprefix(char infix[]);
int top = -1;
float stack[MAX];
void display();
int main()
{
	float ans;
	char prefix[MAX];
	printf("Enter the prefix expression :");
	gets(prefix);
	ans = Evaluateprefix(prefix);
	printf("\nAnswer = %0.2f",ans);
	
}
float Evaluateprefix(char prefix[])
{
	float value1,value2,value3;
	int i=0;
	for(i = strlen(prefix)-1;i>=0;i--)
	{
		if(isdigit(prefix[i]))
		{
			push(stack,(float)(prefix[i]-'0'));
		}
		else
		{
			value2 = pop(stack);
			value1 = pop(stack);
			switch(prefix[i])
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
	return value;
}
void display()
{
	if(top == -1)
		printf("---------Stack is Empty---------\n");
	else
		printf("---------Stack---------\n");
		for(int i=top;i>=0;i--)
			printf("\t|%d|\n",stack[i]);
}


