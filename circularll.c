#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node*next;

};

void traversal(struct node*head)
{
    int i=0;
while(head!=NULL)
{
printf("%d. %d\n",i+1,head->data);
i++;
head=head->next;
}
}

struct node* del(struct node*head)
{
struct node* ptr=head;
//ptr=(struct node*)malloc(sizeof(struct node));
//ptr->data=head->data;
ptr->data=head->data;
head=head->next;
free(ptr);
return(head);
}
void main()
{
struct node*head;
struct node*first;
struct node*second;
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
head->data=20;
head->next=first;

first->data=30;
first->next=second;

second->data=40;
second->next=NULL;
printf("list before deletion\n");
traversal(head);

printf("list before deletion\n");
head=del(head);
traversal(head);



}
