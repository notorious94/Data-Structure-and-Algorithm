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

struct node
{
    int data;
    node* next;
};

int element;
node *head=NULL;

void insert()
{
    int n;
    sif(n);
    node *create = new node();
    create->data=n;
    create->next=NULL;

    if(!head)
        head=create;
    else
    {
        node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=create;
    }
    element++;
}

void _delete(int index)
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    if(index>element||index<1)
    {
        pf("\nInvalid Index\n");
        return;
    }

    node *temp1=head;
    if(index==1)
    {
        head=temp1->next;
        --element;
        delete temp1;
        return;
    }
    for(int i=0;i<index-2;i++)
        temp1=temp1->next;

    node *temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
    --element;
}

void print()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }

    node *visit=head;
    pf("\nLinked List: ");
    while(visit!=NULL)
    {
        pf("%d ",visit->data);
        visit=visit->next;
    }
    pf("\n\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, pos;

    pf("How many elements ?: ");
    sif(size);
    pf("\nInsert %d elements : ",size);

    for(int i=1;i<=size;i++)
        insert();

    print();

    while(element)
    {
        pf("Position you want to delete : ");
        sif(pos);
        _delete(pos);
        print();
    }

    pf("\nExiting Program...\n");

    return 0;
}
