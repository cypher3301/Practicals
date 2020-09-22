#include"stdio.h"
#include"conio.h"
#define MAX 10
int queue[MAX];
int front = -1,rear = -1;
void inputres();
void outputres();
void insertfront(int n);
void insertrear(int n);
void deletefront();
void deleterear();
void display();
int main()
{
	int n,i;
	do
	{
		printf("\n-------------------Doubly Queue-------------------\n");
		printf("1. Input restricted queue\n");
		printf("2. Output restricted queue\n");
		printf("3. Exit\n");
		printf("Enter the option :");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				inputres();
				break;
			case 2:
				outputres();
				break;
			case 3:
				printf("-------------------Thank you-------------------");
				break;
			default:
				printf("Invalid Operation\n");
		}
	}while(i!=4);
	return 0;
}
void insertrear(int n)
{
	if((front == 0 && rear == MAX-1) || (front = rear+1)) 
	{
		printf("Queue if Full\n");	
	}
	else if(front == -1)
	{
		front = rear = 0;
		queue[rear] = n;	
	}	
	else if(front!=0 && rear==MAX-1)
	{
		rear = 0;
		queue[rear] = n;
	}
	else
	{
		rear++;
		queue[rear] = n;
	}
}
void insertfront(int n)
{
	if((front == 0 && rear == MAX-1) || (front = rear+1)) 
	{
		printf("Queue if Full\n");	
	}
	else if(front == -1)
	{
		front = rear = 0;
		queue[front] = n;	
	}	
	else if(front==0 && rear!=MAX-1)
	{
		front = 0;
		queue[front] = n;
	}
	else
	{
		front--;
		queue[front] = n;
	}
}
void deletefront()
{
	if(front == -1)
	{
		printf("Queue is Empty\n");
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if(front == MAX-1)
	{
		front =0;
	}
	else
	{
		front++;
	}
}
void deleterear()
{
	if(front == -1)
	{
		printf("Queue is Empty\n");
	}
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if(rear == 0)
	{
		rear = MAX-1;
	}
	else
	{
		rear--;
	}
}
void display()
{
	if(front == -1)
	{
		printf("Queue is Empty\n");
	}
	else if(front>rear)
	{
		for(int i=front;i<MAX-1;i++)
			printf("%d \t",queue[i]);
		for(int i=0;i<=rear;i++)
			printf("%d",queue[i]);
	}
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
	}
}
void inputres()
{
	int opt, value;
	do
	{
		printf("\n-------------------Input Restricted-------------------\n");
		printf("1. Insert element from rear\n");
		printf("2. Delete element from front\n");
		printf("3. Delete element form rear\n");
		printf("4. EXIT\n");
		printf("Enter the Option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter the value");
				scanf("%d",&value);
				insertrear(value);
				break;
			case 2:
				deletefront();
				break;
			case 3:
				deleterear();
				break;
			case 4:
				printf("-------------------Thank you-------------------");
				break;
		}
	}while(opt!=4);
}
void outputres()
{
	int opt, value;
	do
	{
		printf("\n-------------------Output Restricted-------------------\n");
		printf("1. Insert element from front\n");
		printf("2. Insert element from rear\n");
		printf("3. Delete element form front\n");
		printf("4. EXIT\n");
		printf("Enter the Option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter the value");
				scanf("%d",&value);
				insertfront(value);
				break;
			case 2:
				printf("Enter the value");
				scanf("%d",&value);
				insertrear(value);
				break;
			case 3:
				deletefront();
				break;
			case 4:
				printf("-------------------Thank you-------------------");
				break;
		}
	}while(opt!=4);
}
	
