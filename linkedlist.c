#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    int i=0;
    while (ptr != NULL)
    {
        printf("%d. %d\n",i+1, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
struct node *insert_at_first(struct node *head, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    return (p);
}
struct node* insert_at_bw(struct node*head,int data,int pos)
{
struct node*ptr=head;
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
p->data=data;
int i=0;
while(i<pos)
{
ptr=ptr->next;
i++;
}
p->next=ptr->next;
ptr->next=p;
return(head);
}

struct node* insert_at_last(struct node*head,int data)
{
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    ptr->data=data;
    while(p->next!=NULL)
    {
     p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
return(head);
}

struct node* insert(struct node*head,int data, int pos)
{

    
}

void main()
{

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 25;
    head->next = first;
    first->data = 32;
    first->next = second;
    second->data = 65;
    second->next = third;
    third->data = 68;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    traversal(head);

    printf("linked list after insertion \n ");
 /*   head = insert_at_first(head, 56);
    traversal(head);
*/
    /* head=insert_at_bw(head,56,2);
     traversal(head);
*/
     head=insert_at_last(head,54);
     traversal(head);

}
