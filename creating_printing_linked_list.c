#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;

node* get_data()
{
    node *head,*current;
    current=(node*)malloc(sizeof(node));
    head=current;
    int n,i;
    printf("Enter the size of your list\n");
    scanf("%d",&n);
    printf("Enter the data\n");
    for(i=0;i<n;i++)
     {
        scanf("%d",&current->data);
    if(i!=n-1)
    {current->next=malloc(sizeof(node));
    current=current->next;}
    else
        current->next=NULL;
    }
    return head;
}

void print_data(node* head)
{
    printf("The modified list is\n");
    node* current=head;
    while(current->next!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }
    printf("%d\n",current->data);
}

int count_data(head)
{
    int n=1;
    node* p=head;
    while(p->next!=NULL)
    {
        n++;
        p=p->next;
    }
    return n;
}
