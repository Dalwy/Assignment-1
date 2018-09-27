/*
 * Name: Dalton Melville
 * NetID: Drm143.
 * Date: 9/23/18
 */
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define MAX 1000


//*****************************************************************
//*****************************************************************
//*************Stack Template Class Declaration********************
//*****************************************************************
//*****************************************************************

template <class T>
class myStack
{
public:
    myStack();
    void push(T x);
    T pop();
    bool isEmpty() const;
    bool isFull() const;

private:
    int top; //Index of the element on the top of the Stack
    T data[MAX];    //The array storing elements in the Stack
};


//*****************************************************************
//*****************************************************************
//*************Stack Template Implementation***********************
//*****************************************************************
//*****************************************************************

template <class T>
myStack<T>::myStack()
{
    //Todo: initialize the value of int top.
    top = 0;
}

template <class T>
void myStack<T>::push(T x)
{
    //Push element x into the stack
    if(isEmpty())
    {
        top++;
        data[top] = x;
        cout << "top: " << data[top] << endl;
    }
    else
        cout << "Error, Please fix this." << endl;

}

template <class T>
T myStack<T>::pop()
{
    //Pop the top element out from the stack, and return it.

    T item;
    item = data[top];
    top--;
    //cout << "popping: " << data[top] << endl;
    return item;


}

template <class T>
bool myStack<T>::isEmpty() const
{
    //if empty, return true; otherwise, return false
    if(top < MAX)
        return true;
    else
        return false;
}

template <class T>
bool myStack<T>::isFull() const
{
    //if full, return true; otherwise, return false
    if(top >= MAX)
        return true;
    else
        return false;
}
#endif // STACK_H
