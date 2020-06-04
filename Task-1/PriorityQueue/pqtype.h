#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "heaptype.h"

class FullPQ
{};
class EmptyPQ
{};
template<class ItemType>
class PQType
{
public:
    PQType();
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    int getFront();
private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};
#include "pqtype.tpp"
#endif // PQTYPE_H_INCLUDED
