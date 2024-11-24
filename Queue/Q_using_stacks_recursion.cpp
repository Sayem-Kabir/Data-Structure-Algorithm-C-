#include<iostream>
#include<stack>
using namespace std;

class Queue
{
    stack<int> s;
public :
    void push(int x)
    {
        s.push(x);
    }

    int pop()
    {
        if(s.empty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int x = s. top();
        s.pop();
        if(s.empty())
        {
            return x;
        }
        int item = pop();
        s.push(x);
        return item;
    }
};

int main()
    {
        Queue q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);

        cout<<q.pop()<<endl;
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.pop();
       cout<<endl;
    }

