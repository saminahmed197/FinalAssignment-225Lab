#include "stacktype.h"
template <class ItemType>
StackType<ItemType>::StackType()
{
    //items = new ItemType[MAX_ITEMS];
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top ==  MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    top++;
    items[top] = newItem;

}
template <class ItemType>
void StackType<ItemType>::Reverse()
{
    int length=top;
    int temp;
    int firstindex = 0;
    int lastIndex = length;
    while(firstindex < lastIndex)
    {
        temp = items[firstindex];
        items[firstindex] = items[lastIndex];
        items[lastIndex] = temp;
        firstindex++;
        lastIndex--;
    }

}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack("Pop function");
     top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack("Top function");
    return items[top];
}


