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

int calcHeight(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int Lheight = calcHeight(root->left);
    int Rheight = calcHeight(root->right);
    return max (Lheight, Rheight)+1;
}

int calcDiameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int Lheight = calcHeight(root->left);
    int Rheight = calcHeight(root->right);
    int currDiameter = Lheight + Rheight +1;

    int LDiameter = calcDiameter(root->left);
    int RDiameter = calcDiameter(root->right);
    return max(currDiameter,max(LDiameter,RDiameter));
}

int Calc_Diameter(Node* root, int* height)
{
    if(root==NULL)
    {
        *height = 0;
        return 0;
    }
    int lh = 0; int rh = 0;
    int l_diameter = Calc_Diameter(root->left, &lh);
    int r_diameter = Calc_Diameter(root->right, &rh);

    int Curr_Diameter = lh + rh + 1;
    *height = max(lh,rh) +1;

    return max(Curr_Diameter, max(l_diameter, r_diameter));
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

   cout<<calcHeight(root)<<endl;
   cout<<calcDiameter(root)<<endl;
   int height = 0;
   cout<<Calc_Diameter(root, &height)<<endl;
}
