/*STACK OPERATIONS (PUSH,POP,PEEP,EMPTY,DISPLAY) USING STRUCTURE*/

#include<stdio.h>
#include<conio.h>
#define MAX 100
void push(int var1);
void pop();
void peep();
void empty();
void display();
struct stacks {
	int stack[MAX];
	int top = -1;
}stack1;

int main()
{
	int opt,a;
	printf("---------Create your stack1---------\n");
	do{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peep\n");
		printf("4. Empty\n");
		printf("5. Display\n");
		printf("6. EXIT\n");
		printf("Enter the number :");
		scanf("%d",&opt);


		switch (opt)
		{
		case 1:
			printf("--------->   Enter the element :");
			scanf("%d",&a);
			push(a);
			break;
		case 2:
			pop();
			break;
		case 3:
			peep();
			break;
		case 4:
			empty();
			break;
		case 5:
			display();
			break;
		case 6:
			printf("---------THANK YOU---------");
		}
	}while(opt != 6);
	return 0;
}
void push(int a)
{
	if(stack1.top == MAX)
		printf("---------Stack Overflow---------\n");
	else
		stack1.top++;
		stack1.stack[stack1.top] = a;
}
void pop()
{
	if(stack1.top == -1)
		printf("---------Stack Underflow---------\n");
	else
		stack1.top--;
		printf("--------->   Element poped is = %d\n",stack1.stack[stack1.top+1]);
}
void peep()
{
	if(stack1.top == -1)
		printf("---------Stack Underflow---------\n");
	else
		printf("--------->   Last element = %d\n",stack1.stack[stack1.top]);
}
void empty()
{
	if(stack1.top == -1)
		printf("---------Stack is already empty---------\n");
	else
		stack1.top = -1;
}
void display()
{
	if(stack1.top == -1)
		printf("---------Stack is Empty---------\n");
	else
		printf("---------Stack---------\n");
		for(int i=stack1.top;i>=0;i--)
			printf("\t|%d|\n",stack1.stack[i]);
}


