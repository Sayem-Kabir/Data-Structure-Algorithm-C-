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

void Delete_head(node* &head)
{
    node* temp = head;
    head = head->next;
}

void Delete_any(node* &head, int x)
{
    node* temp=head;

    while(temp->next->data != x)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void Delete_last(node* &head)
{
    node* temp = head;
    while (temp->next->next  !=NULL)
    {
        temp = temp->next;
    }
    temp->next =NULL;
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


int main()
{
  node* head = NULL;

  Insert_at_head (head, 2);
  cout<<"Insert 2 at head"<<endl;
  show(head);
  cout<<endl;

  cout<<"Insert 3,4,5 at tail"<<endl;
  Insert_at_tail (head, 3);
  Insert_at_tail (head, 4);
  Insert_at_tail (head, 5);
  show(head);
  cout<<endl;


  cout<<"Insert 10 at 2nd position"<<endl;
  Insert_at_middle(head,2,10); //2,10,3,4,5
  show(head);
  cout<<endl;


  cout<<"Delete 3"<<endl;
  Delete_any(head,3);
  show(head);
  cout<<endl;


  cout<<"Delete Tail"<<endl;
  Delete_last(head);
  show(head);
  cout<<endl;


  cout<<"Delete Head"<<endl;
  Delete_head(head);
  show(head);
  cout<<endl;

  cout<<"Current Linked_LIst"<<endl;
  show(head);
  cout<<endl;
}

