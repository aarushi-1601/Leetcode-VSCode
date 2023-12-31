// Implementation of Stack using Arrays

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Stacks
{
    public:
    int top;
    int maxSize;
    int* array;
    Stacks(int max)
    {
        top=-1;
        maxSize=max;
        array=new int[max];
    }
    int isFull()
    {
        if(top==maxSize-1)
        cout<<"Will not be able to push maxSize reached"<<endl;
        return top==maxSize-1;
    }

    int isEmpty()
    {
        if(top==-1)
        cout<<"Will not be able to pop minSize reached"<<endl;
        return top==-1;
    }
    void push(int item)
    {
        if(isFull()) return;
        array[++top]=item;
        cout<<"We have pushed "<<item<<" to stack"<<endl;
    }
    int pop()
    {
        if(isEmpty()) return INT_MIN;
        return array[top--];
    }
    int peek()
    {
        if(isEmpty()) return INT_MIN;
        return array[top];
    }
};

int main()
{
    Stacks stacks(10);
    stacks.push(5);
    stacks.push(10);
    stacks.push(15);
    int flag=1;
    while(flag)
    {
        if(!stacks.isEmpty())
            cout<<"We have popped "<< stacks.pop()<<" from stack"<<endl;
        else
            cout<<"Can't Pop stack must be empty\n";
            
           flag=0;
    }

}

