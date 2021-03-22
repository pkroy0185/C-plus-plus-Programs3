#include<iostream>
using namespace std;
int main( )
{ 
  int i,t;
  cout<<"This program generates numbers from 0 to 49 using Rand function.."<<endl;
  for (i=1;i<=100;i++)
  { 
    t=rand( );
    t=t%50;
    cout<<t<<"   ";
  }
  cout<<endl;
  return 0;
}