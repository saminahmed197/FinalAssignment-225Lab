#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <iostream>
using namespace std;
const int MAX_ITEMS = 5;

class FullStack
// Exception class thrown
// by Push when stack is full.
{


};
class EmptyStack
// Exception class thrown
// by Pop and Top when stack is empty.
{
private:
    string reason;

public:

    EmptyStack(string reason){
        this->reason = reason;
    }
    //int x = 5;
    void printExceptionMsg(){
        cout<<"Empty stack exception thrown from "<<reason<<endl;
    }

};
template <class ItemType>
class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    void Reverse();
    ItemType Top();
    int top;
    ItemType items[MAX_ITEMS];
};
#include "stacktype.tpp"
#endif // STACKTYPE_H_INCLUDED


