#include<stdlib.h>
#include<stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();                                                 
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
        int data;
        struct node *link;
};
struct node *head=NULL;
int main()     
{
        int choice;
        while(1){
               
                printf("MENU\n");
                printf("1.Create\n");
                printf("2.Display\n");
                printf("3.Insert at the beginning    n");
                printf("4.Insert at the end\n");
                printf("5.Insert at specified position\n");
                printf("6.Delete from beginning\n");
                printf("7.Delete from the end\n");
                printf("8.Delete from specified position\n");
                printf("9.Exit\n");
                printf("Enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space");
                exit(0);
        }
        printf("Enter the data value for the node:t");
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->link!=NULL)
                {
                        ptr=ptr->link;
                }
                ptr->link=temp;
        }
}
void display()
{
        struct node *ptr;
        if(head==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=head;
                printf("nThe List elements are:n");
                while(ptr!=NULL)
                {
                        printf("%dt",ptr->data );
                        ptr=ptr->link ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space:");
                return;
        }
        printf("Enter the data value for the node:" );
        scanf("%d",&temp->data);
        temp->link =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->link=head;
                head=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space:");
                return;
        }
        printf("Enter the data value for the node:" );
        scanf("%d",&temp->data );
        temp->link =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->link !=NULL)
                {
                        ptr=ptr->link ;
                }
                ptr->link =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space");
                return;
        }
        printf("Enter the position for the new node to be inserted:");
        scanf("%d",&pos);
        printf("Enter the data value of the node:");
        scanf("%d",&temp->data) ;
        temp->link=NULL;
        if(pos==0)
        {
                temp->link=head;
                head=temp;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++) { ptr=ptr->link;
                        if(ptr==NULL)
                        {
                                printf("Position not found");
                                return;
                        }
                }
                temp->link =ptr->link ;
                ptr->link=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("List is Empty");
                return;
        }
        else
        {
                ptr=head;
                head=head->link ;
                printf("The deleted element is :%d",ptr->data);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("List is Empty:");
                exit(0);
        }
        else if(head->link ==NULL)
        {
                ptr=head;
                head=NULL;
                printf("The deleted element is:%d",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=head;
                while(ptr->link!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->link;
                }
                temp->link=NULL;
                printf("The deleted element is:%d",ptr->data);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("The List is Empty");
                exit(0);
        }
        else
        {
                printf("Enter the position of the node to be deleted");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=head;
                        head=head->link ;
                        printf("The deleted element is:%d",ptr->data  );
                        free(ptr);
                }
                else
                {
                        ptr=head;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->link ;
                                if(ptr==NULL)
                                {
                                        printf("Position not Found");
                                        return;
                                }
                        }
                        temp->link =ptr->link ;
                        printf("The deleted element is:%d",ptr->data );
                        free(ptr);
                }
        }
}
