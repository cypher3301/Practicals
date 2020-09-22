#include"stdio.h"
#include"conio.h"
#include"malloc.h"
struct node
{
	int data;
	struct node* next;
};
struct node *create_queue(struct node*);
struct node *push(struct node*);
struct node *pop(struct node*);
struct node *display(struct node*);
int a;
int main()
{
	struct node* head = NULL;
	int opt;
		printf("\n------------QUEUE------------\n");
		printf("1. Create a Queue \n");
		printf("2. Push \n");
		printf("3. Pop\n");
		printf("4. Display\n");
		printf("5. EXIT\n");
		do{
		printf("\n------------>Enter the option :");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				head = create_queue(head);
				printf("------------Queue created!!------------");
				break;
			case 2:
				head = push(head);
				printf("------------Element pushed!!------------");
				break;
			case 3:
				head = pop(head);
				printf("------------Poped element is %d------------",a);
				break;
			case 4:
				head = display(head);
				break;
			case 5:
				printf("------------THANK YOU------------");
				break;
			default:
				printf("INVALID OPERATION");
				break;
		}
	}while(opt!=5);
return 0;
}
struct node *create_queue(struct node *head)
{
	int value;
	struct node* new_node;
	printf("Enter the data:");
	scanf("%d",&value);
	do
	{
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = value;
		new_node->next = NULL;
		if(head == NULL)
			head = new_node;
		else
		{
			struct node* ptr;
			ptr = head;
			while(ptr->next!= NULL)
				ptr = ptr->next;	
			ptr->next = new_node;	
		}
		printf("Enter the data:");
		scanf("%d",&value);
	}while(value!=-1);
	return head;
}
struct node *push(struct node* head)
{
	struct node* ptr,*new_node;
	int value;
	printf("Enter the data:");
	scanf("%d",&value);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = NULL;
	ptr = head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	return head;	
}
struct node* pop(struct node* head)
{
	struct node* ptr;
	ptr = head;
	head = head->next;
	a = ptr->data;
	free(ptr);
	return head;
}
struct node* display(struct node* head)
{
	struct node* ptr;
	ptr = head;
	printf("------------QUEUE------------> ");
	while(ptr!=NULL)
	{
		printf("%d \t",ptr->data);
		ptr = ptr->next;
	}
	return head;
}
