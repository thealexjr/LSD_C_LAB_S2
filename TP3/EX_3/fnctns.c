#include "stack.h"


t_stack *new_stack(int data)
{
    t_stack *S=(t_stack *)malloc(sizeof(t_stack));
    S->data=data;
    S->next=NULL;
    return S;
}

int is_empty(t_stack *head)
{
    if (head==NULL)
        return 1;
    return 0;
}

void push(t_stack** head, int data)
{
    t_stack* S=new_stack(data);
    S->next=*head;
    *head=S;
    return;
}
int pop(t_stack** head)
{
    if(is_empty(*head))
        return INT_MIN;
    int data=(*head)->data;
    t_stack* temp=*head;
    *head=(*head)->next;
    free(temp);
    return data;
}

int	peek_stack(t_stack *head)
{
    if (is_empty(head)==0)
    {
        return head->data;
    }
    else
        return INT_MIN;
}

int stack_len(t_stack* head)
{
    t_stack* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void print_stack(t_stack* head)
{
    t_stack* temp=head;
    printf("[ ");
    while(temp!=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("]\n");
    return;
}

