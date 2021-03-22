#include<iostream>
using namespace std;
class base1
{
        int a;
    public:
        base1(int m)
        {
            a=m;
            cout<<"Base1 class initialised...\n"<<endl;
        }
        void Display()
        {
            cout<<"a : "<<a<<endl;
        }
};
class base2
{
    float b,c;
    public:
        base2(int n,int o):b(n),c(b+o)
        {
            cout<<"Base2 class initialised...\n"<<endl;
        }
        void Display()
        {
            cout<<"b : "<<b<<endl;
            cout<<"c : "<<c<<endl;
        }
};
class derived:public base1,public base2
{
    int p,q;
    public:
         derived(int a,int b,int c):base1(2*a),base2(c,c),p(a)
         {
             q=b;
             cout<<"derived class initialised...\n"<<endl;
         }
     void Display()
    {
       cout<<"P : "<<p<<endl;
       cout<<"Q : "<<q<<endl;
    }
};
int main()
{
    derived d1(9,18,21.9);
    d1.base1::Display();
    d1.base2::Display();
    d1.Display();
    return 0;
}