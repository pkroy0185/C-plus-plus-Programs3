#include<iostream>
using namespace std;

int main()
{
    float num,den;
    cout<<"Enter numerator and denominator : ";
    cin>>num>>den;
    try
    {
       if(den!=0)
         cout<<"Result : "<<num/den<<endl;
       else
          throw(den);
    }
    catch(float d)
    {
       cout<<"Exception : Divide by zero.\n";
    }
    cout<<"End : \n";
    return 0;
}