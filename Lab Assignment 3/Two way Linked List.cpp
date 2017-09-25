#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define pi acos(-1.0)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

struct node {
    int data;
    node* next;
    node* prev;
};

node *head=NULL;

node* create(int n)
{
    node *c = new node();
    c->data=n;
    c->next=NULL;
    c->prev=NULL;
    return c;
}

void f_in(int n)
{

    node *new_node=create(n);

    if(!head)
        head=new_node;

    else
    {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void r_in(int n)
{
    node *new_node=create(n);
    if(!head)
        head=new_node;
    else
    {
        node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }
}

void f_delete()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    node *temp=head;
    head = temp->next;
    temp->prev=NULL;
    temp=head;
    pf("\nItem Deleted from Forward\n");
}

void r_delete()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    else if(!head->next)
        head=NULL;
    else
    {
        node *temp=head;
        while(temp->next->next!=NULL)
            temp=temp->next;
        temp->next=NULL;
    }
    pf("\nItem Deleted from Backward\n");
}

void p_forward()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    node *forward = head;
    pf("\nForward List: ");
    while(forward!=NULL)
    {
        pf("%d ", forward->data);
        forward = forward->next;
    }
    pf("\n");
}

void p_backward()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    node *backward = head;

    while(backward->next!=NULL)
        backward = backward->next;

    pf("\nBackward List: ");

    while(backward!=NULL)
    {
        pf("%d ", backward->data);
        backward = backward->prev;
    }

    pf("\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pf("\n     MENU\n\n");
    pf("1. Insert Front\n");
    pf("2. Insert Back\n");
    pf("3. Delete Front\n");
    pf("4. Delete Back\n");
    pf("5. Exit\n");

    int choice,val;
    while(1)
    {
        pf("\nChoice : ");
        sif(choice);

        if(choice>5)
        {
            pf("\nInvalid Choice\n");
            continue;
        }
        else if(choice==5)
        {
            pf("\nExiting Program....\n");
            break;
        }
        switch(choice)
        {
            case 1:
                pf("\nInput Front: ");
                sif(val);
                f_in(val);
                p_forward();
                p_backward();
                break;
            case 2:
                pf("\nInput Back: ");
                sif(val);
                r_in(val);
                p_forward();
                p_backward();
                break;
            case 3:
                f_delete();
                p_forward();
                p_backward();
                break;
            case 4:
                r_delete();
                p_forward();
                p_backward();
                break;
        }
    }
    return 0;
}
