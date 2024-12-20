#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inOrder[ ], int start, int end, int curr)
{
    for(int i = start; i<=end; i++)
    {
        if(inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preOrder[ ], int inOrder[ ], int start, int end)
{
    static int i=0;
    if(start > end)
    {
        return NULL;
    }

    int curr = preOrder[i];
    i++;
    Node* node = new Node(curr);
    if(start == end)
    {
        return node;
    }

    int pos = search(inOrder, start, end, curr);
    node->left = buildTree(preOrder, inOrder, start, pos-1);
    node->right = buildTree(preOrder, inOrder, pos+1, end);
    return node;
}

void inorderPrint(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main()
{
    int preOrder [ ] = {1,2,4,3,5};
    int inOrder [ ] = {4,2,1,5,3};

    Node* root = buildTree(preOrder,inOrder,0,4);
    inorderPrint(root);
}
