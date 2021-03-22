#include<iostream>
using namespace std;
class base1
{
    protected:
        int b1;
    public:
        void GetDataBase1()
        {
            cout<<"Enter b1 : ";
            cin>>b1;
        }
};
class base2
{
    protected:
        int b2;
    public:
        void GetDataBase2()
        {
            cout<<"Enter b2 : ";
            cin>>b2;
        }
};
class derived:public base1,public base2
{
    public:
    void Display()
    {
       cout<<"Base1 : "<<b1<<endl;
       cout<<"Base2 : "<<b2<<endl;
       cout<<"B1*B2 : "<<b1*b2<<endl;
    }
};
int main()
{
    derived d1;
    d1.GetDataBase1();
    d1.GetDataBase2();
    d1.Display();
    return 0;
}