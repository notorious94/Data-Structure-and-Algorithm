#include<bits/stdc++.h>
using namespace std;
int size=50;
int top=-1;
vector<int>stak;

void show()
{
    cout<<"Stack : ";
    for(int i=0;i<=top;i++)
        cout<<stak[i]<<" ";
    cout<<endl;
}

void push(int value)
{
    if(top==size-1)
    {
        cout<<"Stack Full\n";
        return;
    }
    else
    {
        stak.push_back(value);
        top++;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack empty\n";
        return;
    }
    else
        top--;
}
int menu()
{
    static int call=1;
    if(call==1)
    {
        cout<<"1 Push\n";
        cout<<"2 Pop\n";
        cout<<"3 Show\n";
        cout<<"4 Resize\n";
        cout<<"5 Exit\n";
        call++;
    }
    int choice;
    cin>>choice;
    return choice;
}
int main()
{
    int choice, n;
    cout<<"Size of stack : ";
    cin>>n;
    size=n;

    while(1)
    {
        choice=menu();
        if(choice==1)
        {
            cout<<"Input value to push :";
            cin>>n;
            push(n);
        }
        else if(choice==2)
            pop();
        else  if(choice==3)
            show();
        else if(choice==4)
        {
            cout<<"New size : ";
            cin>>n;
            size=n;
        }
        else if(choice==5)
            break;
    }

    return 0;
}
