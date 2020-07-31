/*STACK OPERATIONS (PUSH,POP,PEEP,EMPTY,DISPLAY) USING ARRAY*/

#include<stdio.h>
#include<conio.h>
#define MAX 100
void push(int a);
void pop();
void peep();
void empty();
void display();
int stack[MAX],top = -1;
int main()
{
	int option,n;
	printf("---------Create your Stack---------\n");
	do{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peep\n");
		printf("4. Empty\n");
		printf("5. Display\n");
		printf("6. EXIT\n");
		printf("Enter the number :");
		scanf("%d",&option);
	
	
		switch (option)
		{
		case 1:
			printf("--------->   Enter the element :");
			scanf("%d",&n);
			push(n);
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
	}while(option != 6);
	return 0;
}
void push(int a)
{
	if(top == MAX)
		printf("---------Stack Overflow---------\n");
	else
		top++;
		stack[top] = a;
}
void pop()
{
	if(top == -1)
		printf("---------Stack Underflow---------\n");
	else
		top--;
		printf("--------->   Element poped is = %d\n",stack[top+1]);
}
void peep()
{
	if(top == -1)
		printf("---------Stack Underflow---------\n");
	else
		printf("--------->   Last element = %d\n",stack[top]);
}
void empty()
{
	if(top == -1)
		printf("---------Stack is already empty---------\n");
	else
		top = -1;
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


