#include <iostream>
#include <cmath>
#include "pqtype.h"
#include "points.h"

int main()
{
    Points p(10,10);
    Points q(20,30);
    Points r(12,20);
    int d1=p.dist();
    int d2=q.dist();
    int d3=r.dist();
    cout<<"Points are: ";
    p.print();
    q.print();
    r.print();
    PQType<int> po(3);
    po.Enqueue(d1);
    po.Enqueue(d2);
    po.Enqueue(d3);

    /*int forxp=((p.getx()-0)*(p.getx()-0));
    int foryp=((p.gety()-0)*(p.gety()-0));
    int poin=sqrt(forxp+foryp);
    po.Enqueue(poin);
    int forxq=((q.getx()-0)*(q.getx()-0));
    int foryq=((q.gety()-0)*(q.gety()-0));
    int poin1=sqrt((forxq+foryq));
    po.Enqueue(poin1);
    */
    cout<<"\nElements are: ";
    while(!po.IsEmpty())
    {
        int n=po.getFront();
        cout<<n<<endl;
        po.Dequeue(n);
    }
    //cout<<po.IsEmpty();*/
    return 0;

}
