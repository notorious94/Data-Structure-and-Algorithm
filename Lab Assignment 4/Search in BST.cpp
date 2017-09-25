#include<bits/stdc++.h>
using namespace std;

/// M A C R O Starts Here
#define pf printf
#define sf scanf
#define MAX 500000
#define pi acos(-1.0)
#define get_stl(s) getline(cin,s)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

struct bst
{
    int data;
    bst *left;
    bst *right;
};

bst* insert(int n, bst* root)
{
    bst *node;
    node = new bst();
    node->data=n;
    node->left=node->right=NULL;

    if(!root)
        root=node;
    else if(n<root->data)
        root->left=insert(n,root->left);
    else
        root->right=insert(n,root->right);

    return root;
}

bool search(int item, bst *root)
{
    if(!root)
        return false;
    else if(item==root->data)
        return true;
    else if(item<root->data)
        search(item, root->left);
    else
        search(item, root->right);
}

void preorder(bst *root)
{
    if(!root)
        return;

    pf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    bst *root;
    root = NULL;

    pf("****MENU****\n\n");
    pf("1. Insert\n");
    pf("2. Display\n");
    pf("3. Search\n");
    pf("4. Exit\n\n");

    int c, item;

    while(1)
    {
        pf("Enter Choice: ");
        sif(c);
        if(c==4)
        {
            pf("Exiting Program....\n");
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
                pf("\nInput Element: ");
                sif(item);
                root = insert(item, root);
                pf("Item Inserted\n\n");
                break;
            case 2:
                pf("BST In Preorder: ");
                preorder(root);
                pf("\n\n");
                break;
            case 3:
                pf("\nInput Element: ");
                sif(item);
                (search(item,root)) ? pf("Item Found\n\n") : pf("Item Not Found\n\n");
                break;
        }
    }
    return 0;
}
