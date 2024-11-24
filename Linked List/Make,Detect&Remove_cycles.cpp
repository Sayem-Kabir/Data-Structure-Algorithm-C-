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

void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* startNode;

    int count =1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slow=head;
    node* fast= head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
        slow= slow->next;
        fast= fast->next;
    }
    slow->next = NULL;
}

int main()
{
  node* head = NULL;

  Insert_at_head (head, 1);
  Insert_at_tail (head, 2);
  Insert_at_tail (head, 3);
  Insert_at_tail (head, 4);
  Insert_at_tail (head, 5);
  show(head);
  makeCycle(head,3);
  //show(head);

  cout<<detectCycle(head)<<endl;
  removeCycle(head);
  show(head);

  }
