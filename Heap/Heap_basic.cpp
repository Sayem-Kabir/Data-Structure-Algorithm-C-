#include<iostream>
#include<queue>
using namespace std;

class heap
{
    public:
        int arr[100];
        int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insertNode(int value)
    {
        // Taking all nodes to an array
        // Starts from 1st index of an array
        // Size is the number of total node
        // compare the current node to its parent node
        // Then put all nodes to its correct order

        size = size + 1;
        int i = size;
        arr[i] = value;

        while(i>1)
        {
            int parent = i/2;
            if(arr[parent]<arr[i])
            {
                swap(arr[parent],arr[i]);
                i = parent;
            }
            else
            {
                return;
            }

        }
    }

    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteNode()
    {
        if(size == 0)
        {
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1] = arr[size]; // insert last element to 1st
        size--; // remove last element

        // put all nodes to correct order
        int i=1;
        while(i<size)
        {
            int left_index = 2*i; // for 1st index of array, first value will go to 1st index of array, not in 0th index
            int right_index = 2*i+1;

            if(left_index<size && arr[left_index]>arr[i])
            {
                swap(arr[left_index],arr[i]);
                i = left_index;
            }
            else if(right_index<size && arr[right_index]>arr[i])
            {
                swap(arr[right_index],arr[i]);
                i = right_index;
            }
            else
                return;
        }
    }
};

// Heapify for max heap
void heapify(int arr[], int n, int i)  // convert array to max heap, T(n) = O(log n)
{
    int largest = i;
    int left_index = 2*i+1;  // for zero based array-> first node of heap goes to 1st index in array, not in 0th index of array
    int right_index = 2*i+2; // for zero based array

    if(left_index<n && arr[largest]<arr[left_index])
        {
            largest = left_index;
        }
    if(right_index<n && arr[largest]<arr[right_index])
        {
            largest = right_index;
        }

    if(largest != i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
}

void heapsort(int arr[], int n)
{
    for(int i=n/2-1; i>=0; i--) //build heap
    {
        heapify(arr,n,i);
    }

    for(int i=n-1; i>0; i--) //one by one extracting all elements
    {
        swap (arr[0], arr[i]);
        heapify(arr,i,0);
    }
}

// if we want to convert the array to min heap then the leargest number will be the smallest number and the smaller than sign would be the greater than size

int main()
{
    heap h;
    h.insertNode(50);
    h.insertNode(55);
    h.insertNode(53);
    h.insertNode(52);
    h.insertNode(54);

    h.print();
    h.deleteNode();
    h.print();

    // Build Heap
    int n=5;
    int arr[n] = {54, 53, 55, 52, 50};

    cout<<"Print Heapify"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Heapsort
    heapsort(arr,n);
    cout<<"Printing sorted array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //priority queue for max heap

    cout<<"Using Priority Queue"<<endl;

    priority_queue<int> maxheap;

    maxheap.push(4);
    maxheap.push(2);
    maxheap.push(5);
    maxheap.push(3);

    cout<< "Top element for maxheap "<<maxheap.top()<<endl;

    maxheap.pop();
    cout<< "Top element after pop "<<maxheap.top()<<endl;

    cout<<"Size "<<maxheap.size()<<endl;

    if(maxheap.empty())
    {
        cout<<"Priority Queue is empty "<<endl;
    }
    else
    {
        cout<<"Priority Queue is not empty "<<endl;
    }

    // priority queue for min heap
    priority_queue<int, vector<int>, greater<int> > minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<< "Top element of minheap "<<minheap.top()<<endl;

    minheap.pop();
    cout<< "Top element after pop "<<minheap.top()<<endl;

    cout<<"Size "<<minheap.size()<<endl;

    if(minheap.empty())
    {
        cout<<"Priority Queue is empty "<<endl;
    }
    else
    {
        cout<<"Priority Queue is not empty "<<endl;
    }
}
