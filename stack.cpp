#include<stdio.h>
#include<iostream>
using namespace std;
int top=-1;
int Stack[20];
void push(int x)
{
    top=top+1;
    Stack[top]=x;
}
int pop()
{
    return Stack[top--];
}
bool isEmpty()
{
    if(top==-1)
        return true;
    return false;
}
int _size()
{
    return top+1;
}


int main()
{
    cout<<"Is Empty :"<<isEmpty()<<endl;
    cout<<"size :"<<_size()<<endl;
    push(5);
    cout<<"After pushing 5.."<<endl;
    push(6);
    cout<<"After pushing 6.."<<endl;
    push(7);
    cout<<"After pushing 7.."<<endl;
    cout<<"Is Empty :"<<isEmpty()<<endl;
    cout<<"Size :"<<_size()<<endl;
    cout<<pop()<<endl;
    cout<<"Is Empty:"<<isEmpty()<<endl;
    cout<<"Size:"<<_size()<<endl;
    cout<<pop()<<endl;
    cout<<"Is Empty :"<<isEmpty()<<endl;

    cout<<"Size:"<<_size()<<endl;
    return 0;
}
