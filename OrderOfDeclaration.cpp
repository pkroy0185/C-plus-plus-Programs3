#include<iostream>
using namespace std;
class sample1 
{
    int a,b;
    public:
         sample1(int i,int j):a(i),b(3*j)
         {      }
         void Display1()
         {
             cout<<"a = "<<a<<"\t\tb = "<<b<<endl;
         }
};
class sample2 
{
    int a,b;
    public:
         sample2(int i,int j):b(i),a(i+j)
         {      }
         void Display2()
         {
             cout<<"a = "<<a<<"\t\tb = "<<b<<endl;
         }
};
class sample3 
{
    int a,b;
    public:
         sample3(int i,int j):a(i),b(a*j)
         {      }
         void Display3()
         {
             cout<<"a = "<<a<<"\t\tb = "<<b<<endl;
         }
};
class sample4 
{
    int b,a;    // correct order of declaration is this
    public:
         sample4(int i,int j):b(i),a(b*j)
         {      }
         void Display4()
         {
             cout<<"a = "<<a<<"\t\tb = "<<b<<endl;
         }
};
int main()
{
    sample1 s1(6,8);
    s1.Display1();
    sample2 s2(6,8);
    s2.Display2();
    sample3 s3(6,8);
    s3.Display3();
    sample4 s4(6,8);
    s4.Display4();
    return 0;
}