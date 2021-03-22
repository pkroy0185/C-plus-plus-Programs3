#include<iostream>
using namespace std;
class base1
{
    protected:
        int a;
    public:
        base1(int m)
        {
            a=m;
            cout<<"Base1 class initialised....\n";
        }
        void Display()
        {
            cout<<"A : "<<a<<endl;
        }
};
class base2
{
    protected:
        float b;
    public:
        base2(float n)
        {
            b=n;
            cout<<"Base2 class initialised....\n";
        }
        void Display()
        {
            cout<<"B : "<<b<<endl;
        }
};
class derived:public base2,public base1
{
    int p,q;
    public:
       derived(int a,float b,int c,int d):base1(a),base2(b)
       {
           p=c;
           q=d;
           cout<<"Derived class Initialised...\n";
       }
       void Display()
       {
           cout<<"P : "<<p<<endl;
           cout<<"Q : "<<q<<endl;
       }
};
int main()
{
    derived d1(9,9.34,12,45);
    d1.base1::Display();
    d1.base2::Display();
    d1.Display();
    return 0;
}