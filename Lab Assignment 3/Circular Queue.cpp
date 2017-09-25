#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define MAX_SIZE 5
#define pi acos(-1.0)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

class Queue
{
private:
	int A[MAX_SIZE];
	int front, rear;

public:

	/// Constructor - set front and rear as -1.
	/// Assuming that for an empty Queue, both front and rear will be -1.

	Queue() /// Default Constructor
	{
		front = -1;
		rear = -1;
	}

	bool IsEmpty() // To check whether Queue is empty or not
		return (front == -1 && rear == -1);

	bool IsFull() // To check whether Queue is full or not
		return (rear+1)%MAX_SIZE == front ? true : false;

	void Enqueue(int x) // Inserting an element in queue at rear end
	{
		cout<<"\nEnqueuing "<<x<<" \n";
		if(IsFull())
		{
			cout<<"\nError: Queue is Full\n";
			return;
		}
		if (IsEmpty())
			front = rear = 0;
		else
		    rear = (rear+1)%MAX_SIZE;
		A[rear] = x;
	}

	void Dequeue() // Removes an element in Queue from front end.
	{
		cout<<"\nDequeuing \n";
		if(IsEmpty())
		{
			cout<<"\nError: Queue is Empty\n";
			return;
		}
		else if(front == rear )
			rear = front = -1;
		else
			front = (front+1)%MAX_SIZE;
	}
	void Print()
	{
		/// Finding number of elements in queue
		int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
		cout<<"\nQueue is : ";
		for(int i = 0; i<count; i++)
		{
			int index = (front+i) % MAX_SIZE;
			cout<<A[index]<<" ";
		}
		cout<<endl<<endl;
	}
};

int main()
{
    Queue Q;
    pf(" Menu\n");
    pf("1. Enqueue\n");
    pf("2. Dequeue\n");
    pf("3. Display\n");
    pf("4. Exit\n");
    int c,n;
    while(1)
    {
        pf("\nChoice : ");
        cin>>c;
        if(c==4)
        {
            pf("\nExiting Program....\n");
            break;
        }
        else if(c>4)
        {
            pf("\nInvalid Choice\n");
            continue;
        }
        switch(c)
        {
            case 1:
                pf("\nInput Item : ");
                cin>>n;
                Q.Enqueue(n);
                break;
            case 2:
                Q.Dequeue();
                break;
            case 3:
                Q.Print();
                break;
        }
    }
    return 0;
}
