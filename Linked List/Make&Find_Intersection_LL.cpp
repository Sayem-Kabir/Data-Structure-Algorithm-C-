
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

void intersect(node* &head1, node* &head2, int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* &head1, node* &head2)
{
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}


int main()
{
  node* head1 = NULL;
  node* head2 = NULL;


  Insert_at_head (head1, 1);
  Insert_at_tail (head1, 2);
  Insert_at_tail (head1, 3);
  Insert_at_tail (head1, 4);
  Insert_at_tail (head1, 5);
  Insert_at_tail (head1, 6);
  Insert_at_tail (head2, 9);
  Insert_at_tail (head2, 10);

  //show(head1);
  //show(head2);

  intersect(head1, head2, 3);
  show(head1);
  show(head2);

  cout<<intersection(head1, head2)<<endl;
  }
