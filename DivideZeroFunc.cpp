#include<iostream>
using namespace std;
void Divide(float x,float y)
{
    cout<<"Inside function : "<<endl;
    if(y!=0)
    {
       float result=x/y;
       cout<<"Result : "<<result<<endl;
    }
    else
    {
       throw y;
    }
}
int main()
{
    float num,den;
    cout<<"Enter numerator and denominator : ";
    cin>>num>>den;
    try
    {
       cout<<"Try block :"<<endl;
       Divide(num,den);
    }
    catch(float)
    {
       cout<<"Exception : Divide by zero...\n";
    }
    return 0;
}