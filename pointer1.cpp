#include<iostream>
using namespace std;

int main()
{
    float *p,x=4.343;
    p=&x,
    cout<<"p : "<<p<<"\n&x : "<<&x<<"\n*p : "<<*p<<endl;
    float *q;
    q=new float;
    *q=4.12;
    cout<<"\n\nq : "<<q<<"\n*q : "<<*q<<endl;
    delete q;
    return 0;
}