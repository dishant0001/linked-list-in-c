#include<stdio.h>
#include<stdlib.h>
#include "creating_printing_linked_list.c"

node* insert_data(node* head)
{
    node* p=head; int n,m,z,i;
    n=count_data(head);
    do
    {
    printf("Enter the position at which you want to add data and the data\n");
    scanf("%d %d",&m,&z);
    }
    while(!(m>=1&&m<=n+1));

    if(m==1)                                            //insertion at the beginning of linked list
    {
        p=malloc(sizeof(node));
        p->next=head;
        head=p;
        p->data=z;
    }
    else if(m<=n)                                        //insertion at nth place of linked list
    {
        p=head;
        for(i=1;i<m;i++)
        {
         p=p->next;
        }
        node* q=malloc(sizeof(node));
        q->data=p->data;
        p->data=z;
        q->next=p->next;
        p->next=q;
    }
    else{                                               //insertion at the end of linked list
        p=head;
        while(p->next!=NULL)
            p=p->next;
        node* q=malloc(sizeof(node));
        q->next=NULL;
        p->next=q;
        q->data=z;
    }
    return head;
}

node* delete_data(node *head)
{
    int m,n,i;
    n=count_data(head);
    node* p;
    do
    {
    printf("Enter the position at which you want to delete the data\n");
    scanf("%d",&m);
    }
    while(!(m>=1&&m<=n));

    p=head;
    if(m==1)
    {
        head=p->next;
        free(p);
    }
    else if(m<n)
    {
        for(i=1;i<m;i++)
        {
            p=p->next;
        }
        node* q=p->next;
        p->data=q->data;
        p->next=q->next;
        free(q);
    }

    else
        {
            node* q;
            while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=NULL;
        free(p);
        }
        return head;
}



