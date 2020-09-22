#include"stdio.h"
#include"conio.h"
#include"malloc.h"
struct node
{
	int data;
	struct node* prev;
	struct node* next;
};
typedef struct node node;
struct node *start;
struct node *create(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_given(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_given(struct node*);
int main()
{
	int num;
	struct node* head =NULL;
	
		printf("\n------------Menu------------\n");
		printf("1. Create a linked list\n");
		printf("2. Insert a node at the Beginning\n");
		printf("3. Insert a node at the End\n");
		printf("4. Insert a node at the given position\n");
		printf("5. Delete a node at the Beginning\n");
		printf("6. Delete a node at the End\n");
		printf("7. Delete a node at the given position\n");
		printf("8. Display the Linked List\n");
		printf("9. EXIT\n");
		do
	    {
		printf("\n------------>Enter the option: ");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				head = create(head);
				printf("Linked List created successfully!!\n");
				break;
			case 2:
				head = insert_beg(head);
				printf("Insertion Successful!!\n");
				break;
			case 3:
				head = insert_end(head);
				printf("Insertion Successful!!\n");
				break;
			case 4:
				head = insert_given(head);
				printf("Insertion Successful!!\n");
				break;
			case 5:
				head = delete_beg(head);
				printf("Deletion Successful!!\n");
				break;
			case 6:
				head = delete_end(head);
				printf("Deletion Successful!!\n");
				break;
			case 7:
				head = delete_given(head);
				printf("Deletion Successful!!\n");
				break;
			case 8:
				head = display(head);
				break;
			case 9:
				printf("------------THANK YOU------------\n");
				break;
			default:
				printf("------------Invalid operation------------\n");
		}
	}while(num!=9);
	return 0;
}
struct node *create(struct node *head)
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
		{
			head = new_node;
			new_node->prev = NULL;
		}
		else
		{
			struct node* ptr;
			ptr = head;
			while(ptr->next!= NULL)
				ptr = ptr->next;	
			ptr->next = new_node;	
			new_node->prev = ptr;
		}
		printf("Enter the data:");
		scanf("%d",&value);
	}while(value!=-1);
	return head;
}
struct node *insert_beg(struct node* head)
{
	struct node* new_node;
	int num,value;
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&value);
	new_node->data = value;
	new_node->prev = NULL;
	new_node->next = head;
	head->prev = new_node;
	head = new_node;
	return head;
}
struct node *insert_end(struct node* head)
{
	struct node* ptr,*new_node;
	int value;
	printf("Enter the data:");
	scanf("%d",&value);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	ptr = head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = NULL;
	return head;	
}
struct node* insert_given(struct node* head)
{
	int value, pos, count=1;
	struct node* ptr, *new_node;
	ptr = head;
	printf("Enter the position:");
	scanf("%d",&pos);
	printf("Enter the data:");
	scanf("%d",&value);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	while(count!=pos)
	{
		ptr = ptr->next;
		count++;
	}
	new_node->next = ptr;
	new_node->prev = ptr->prev;
	ptr->prev->next = new_node;
	ptr->prev = new_node;
	return head;
}
struct node* delete_beg(struct node* head)
{
	struct node* ptr;
	ptr = head;
	head = head->next;
	head->prev = NULL;
	free(ptr);
	return head;
}
struct node* delete_end(struct node* head)
{
	struct node* ptr;
	ptr = head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->prev->next = NULL;
	free(ptr);
	return head;
}
struct node* delete_given(struct node* head)
{
	int count=1, pos;
	struct node* ptr;
	ptr = head;
	printf("Enter the position:");
	scanf("%d",&pos);
	while(count!=pos)
	{
		ptr = ptr->next;
		count++;
	}
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(ptr);
	return head;
}
struct node* display(struct node* head)
{
	struct node* ptr;
	ptr = head;
	while(ptr!=NULL)
	{
		printf("%d \t",ptr->data);
		ptr = ptr->next;
	}
	return head;
}
