#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType<int> stck;
    stck.Push(5);
    stck.Push(7);
    stck.Push(4);
    stck.Push(2);
    stck.Push(1);
    StackType<int> st;
    stck.Reverse();
    cout<<"After calling reverse function: "<<endl;
    while(!stck.IsEmpty())
    {
        int t=stck.Top();
        cout<<t<<" ";
        stck.Pop();
    }

    return 0;
}
