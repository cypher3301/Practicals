#include"stdio.h"
#include"conio.h"
#include"malloc.h"
struct node
{
	int data;
	struct node* next;
};
int num;
struct node* head = NULL;
struct node *create(struct node*, int );
struct node *display(struct node*);
struct node* delete_given(struct node* head,int pos);
struct node *insert_end(struct node* head, int );
int main()
{
	int p, count;
	printf("\nEnter the number of people :");
	scanf("%d",&p);
	for(int i=1;i<=p;i++)
		head = create(head, i);
	printf("\nEnter the count :");
	scanf("%d",&count);
	display(head);
	head = delete_given(head,count);
	printf("\n------------>%d Will Survive",num);
	return 0;
}
struct node *create(struct node *head, int value)
{
	struct node* new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		new_node->data = value;
		head = new_node;
		new_node->next = head;
	}
	else
		insert_end(head, value);	
	return head;
}
struct node *insert_end(struct node* head, int value)
{
	struct node* ptr,*new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = head;
	ptr = head;
	while(ptr->next!=head)
		ptr = ptr->next;
	ptr->next = new_node;
	return head;	
}
struct node* delete_given(struct node* head,int pos)
{
	struct node*preptr, *ptr;
	ptr = head;
	while(ptr->next!= ptr)
	{
		for(int i=0;i<pos-1;i++)
		{
			preptr = ptr;
			ptr = ptr->next;
		}
		preptr->next = ptr->next;
		free(ptr);
		ptr = preptr->next;
	}
	num = ptr->data;
	return head;
}
struct node* display(struct node* head)
{
	struct node* ptr;
	ptr = head;
	printf("\n------------People------------>");
	while(ptr->next!=head)
	{
		printf("\t%d",ptr->data);
		ptr = ptr->next;
	}
	printf("\t%d",ptr->data);
	return head;
}
