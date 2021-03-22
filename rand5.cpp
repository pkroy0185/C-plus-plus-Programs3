#include<iostream>
#include<cmath>
using namespace std;
int main( )
{ 
   int i,n,a,b,c,d;
   float p,total=0;
   cout<<"This program finds the expected distance between two points taken inside a square of length 100 units... "<<endl;
   cout<<"Give n (number of experiments) :";
   cin>>n;
   for (i=1;i<=n;i++)
   {
    a=rand( )%101;
    b=rand( )%101;
    c=rand( )%101;
    d=rand( )%101;
    p=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    total=total+p;
   }
 cout<<"Expected Distance is "<<(float)total/n;
 return 0;
}


