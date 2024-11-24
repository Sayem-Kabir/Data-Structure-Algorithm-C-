#include<iostream>
using namespace std;

class node
{
  public:
    int data;
    node* next;

    node(int x)
    {
      data=x;
      next=NULL;
    }
};

void Insert_at_head(node* &head, int x)
{
    node* n = new node(x);
    n->next = head;
    head = n;
}

void Insert_at_middle(node* &head, int p, int x)
{
    node* n = new node(x);
    node* temp = head;

    if(p==1)
    {
		n->next = head;
		head = n;
		return;
    }

    for(int i =1; i<p-1; i++)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void Insert_at_tail(node* &head, int x)
{
      node* n = new node(x);

    if (head == NULL)
    {
        head = n;
        return;
    }
  node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void show(node* head)
{
  node* temp = head;
  while (temp!= NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int length(node* head)
{
    int l=0;
    node* temp = head;
    while(temp!=NULL)
    {
        l++;
        temp= temp->next;
    }
    return l;
}

node* appendK(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail=head;

    int l = length(head);
    int count =1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newTail=tail;
        }
        if(count == l-k+1)
        {
            newHead=tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main()
{
  node* head = NULL;

  Insert_at_head (head, 1);
  Insert_at_tail (head, 2);
  Insert_at_tail (head, 3);
  Insert_at_tail (head, 4);
  Insert_at_tail (head, 5);
  Insert_at_tail (head, 6);

  show(head);

  node*newHead=appendK(head,3);
  show(newHead);
  }
