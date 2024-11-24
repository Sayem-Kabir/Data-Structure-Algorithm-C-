#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int top;
    int n = 100;

public:
    stack()
    {
        arr = new int [n];
        top = -1;
    }

    void push(int x)
    {
        if (top==n-1)
        {
            cout<<"Stack OverFlow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to pop"<<endl;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        top == -1;
        return true;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
}
