#include<stdio.h>
#include<stdlib.h>
#include "insertion_linked_list.c"

node* get_response(node* head)
{
    int a,b;
    while(1)
    {
    printf("Do you want to modify the list? Press 1 for yes, 0 to exit\n");
    scanf("%d",&a);
    if(a==0)
        return;
    printf("Press 1 to add, 0 to delete\n");
    scanf("%d",&b);
    if(b==0)
        {head=delete_data(head);
        print_data(head);}
    else
        {head=insert_data(head);
        print_data(head);}
    }
    return head;
}

int main()
{
    node* head=get_data();
    print_data(head);
    head=get_response(head);
}
