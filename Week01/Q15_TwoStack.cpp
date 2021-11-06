#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n = 100)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};

void twoStacks :: push1(int x)
{
this->arr[++this->top1]=x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
this->arr[--this->top2]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
if(this->top1>=0)
{
    return this->arr[this->top1--];
}
return -1;

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
if(this->top2<this->size)
{
    return this->arr[this->top2++];
}
return -1;
}

