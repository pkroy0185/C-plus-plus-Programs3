#include<iostream>
using namespace std;
class ThreeD
{
   int x,y,z;
   public:
         ThreeD();
         ThreeD(int ,int ,int );
         void Show();
         void operator =(ThreeD );
};
ThreeD::ThreeD()
{
    x=y=z=0;
}
ThreeD::ThreeD(int i,int j,int k)
{
    x=i;
    y=j;
    z=k;
}
void ThreeD::Show()
{
    cout<<"x= "<<x<<"\ty= "<<y<<"\tz= "<<z<<endl;
}
void ThreeD::operator =(ThreeD c2)
{
    x=c2.x;
    y=c2.y;
    z=c2.z;
}
int main()
{
    ThreeD a(1,2,3),b(10,10,10),c;
    cout<<"a :\n";
    a.Show();
    cout<<"b :\n";
    b.Show();
    c=a;
    cout<<"c :\n";
    c.Show();
    c=b;
    cout<<"c :\n";
    c.Show();
    return 0;
}