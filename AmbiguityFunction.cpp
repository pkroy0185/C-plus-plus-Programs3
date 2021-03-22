#include<iostream>
using namespace std;
class base1
{
    protected:
        int b1;
    public:
        void GetData()
        {
            cout<<"Enter b1 : ";
            cin>>b1;
        }
        void Display()
        {
            cout<<"B1 : "<<b1<<endl;
        }
};
class base2
{
    protected:
        int b2;
    public:
        void GetData()
        {
            cout<<"Enter b2 : ";
            cin>>b2;
        }
        void Display()
        {
            cout<<"B2 : "<<b2<<endl;
        }
};
class derived:public base1,public base2
{
    public:
    void Display()
    {
       base1::Display();
       base2::Display();
       cout<<"B1*B2 : "<<b1*b2<<endl;
    }
};
int main()
{
    derived d1;
    d1.base1::GetData();
    d1.base2::GetData();
    d1.Display();
    return 0;
}