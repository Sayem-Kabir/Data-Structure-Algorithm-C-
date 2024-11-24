#include<iostream>
using namespace std;

class Queue
    {
        int *arr;
        int front;
        int rear;
        int n = 100;

    public :
        Queue()
        {
            arr = new int[n];
            front = -1;
            rear = -1;
        }

        void push(int x)
        {
            if(rear == n-1)
            {
                cout<<"Queue Overflow"<<endl;
                return;
            }
            rear++;
            arr[rear] = x;

            if(front == -1)
            {
                front++;
            }
        }

        void pop()
        {
            if(front ==-1 || front > rear)
            {
            cout<<"No elements in queue"<<endl;
            return;
            }
            front++;
        }

        int peek()
        {
            if(front== -1 || front>rear)
            {
                cout<<"No elements in queue"<<endl;
                return -1;
            }
            return arr[front];
        }

        int empty()
        {
            if(front== -1 || front>rear)
            {
               return true;
            }
            return false;
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

        cout<<q.peek()<<endl;
        q.pop();
        q.pop();
        cout<<q.peek()<<endl;

        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.empty();
    }
