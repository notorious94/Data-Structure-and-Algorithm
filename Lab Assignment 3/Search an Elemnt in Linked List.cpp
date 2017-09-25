#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define NULL 0
#define pi acos(-1.0)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

void insert()
{
    int data;
    sif(data);

	if(!head) /// For inserting First Element
	{
		head=new node();
		head->data=data;
		head->next=NULL;
	}

	else
	{
		node *temp=head; /// for traversing

		while(temp->next!=NULL) ///traversing to the last node
			temp=temp->next;

		node *newnode = new node(); /// Creating new node
		newnode->data=data; /// Storing Data
		newnode->next=NULL; /// Last address is NULL

		temp->next=newnode;
	}
}

void print()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }
    node *visit=head;
    pf("\nCurrent List: ");
    while(visit!=NULL) /// Traversing to the end of list
    {
        pf("%d ",visit->data);
        visit=visit->next;
    }

    pf("\n");
}

void search()
{
    if(!head)
    {
        pf("\nList is Empty\n");
        return;
    }

    int item;
    pf("\nInsert the item you are looking for : ");
    sif(item);
    bool found=false;
    node *search=head;
    while(search!=NULL) /// Traversing to the end of list
    {
        if(search->data==item)
        {
            pf("\nItem Found in address : %d\n",&search->data);
            found =true;
            break;
        }
        search=search->next;
    }
    if(found==false)
    {
        pf("\nItem is not in the List\n");
        return;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int element;

    pf("How many Elements ?: ");
    sif(element);

    pf("\nInput %d Items: ",element);

    for(int i=1;i<=element;i++)
        insert();

    print();

    search();

    return 0;
}

