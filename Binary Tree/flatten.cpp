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

void flatten(Node* root)
{
    if(root==NULL || root->right == NULL || root-> left == NULL)
    {
        return;
    }

    if(root->left !=NULL)
    {
        flatten(root->right);

        Node* temp = root->right;
        root->right = root->left;
        root->left =NULL;

        Node* t = root->right;
        while(t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void inorderPrint(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data;
    inorderPrint(root->right);
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right= new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right = new Node(7);

    inorderPrint(root);
    cout<<endl;
    flatten(root);
    inorderPrint(root);
}
