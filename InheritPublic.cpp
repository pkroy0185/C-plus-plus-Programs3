#include<iostream>
using namespace std;
class Base
{
    int a;
    public:
          int b;
          void GetData()
          {
             cout<<"Enter a and b : ";
             cin>>a>>b;
          }
          int GetA()
          {
             return a;
          }
          void DisplayA()
          {
             cout<<"\nA : "<<a;
          }
};
class Derived:public Base
{
    int c;
    public:
          void Mul()
          {
             c=b*GetA();
          }
          void Display();
};
void Derived::Display()
{
    cout<<"\nA : "<<GetA()<<endl;
    cout<<"B : "<<b<<endl;
    cout<<"C : "<<c<<endl;
}
int main()
{
    Derived D;
    D.GetData();
    D.Mul();
    D.DisplayA();
    D.Display();
    return 0;
}