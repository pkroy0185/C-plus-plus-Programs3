#include<iostream>
#include<cmath>
using namespace std;
int main( )
{ 
   int i,n,a,b,success=0;
   float prob;
   cout<<"This program finds the probability of a randomly chosen point in a circle x^2+y^2=100^2 is above y=50...."<<endl;
   cout<<"Give n(number of experiments) : "; 
   cin>>n;
   for(i=1;i<=n;i++)
   {
     do{
        a=rand( )%201-100;
        b=rand( )%201-100;
       }while(a*a+b*b>100*100);
     if(b>50) 
       success++;
   }
   cout<<"Required Probability is "<<(float)success/n;
   return 0;
}


