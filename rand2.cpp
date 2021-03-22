#include<iostream>
using namespace std;
int die()
{ 
    return(rand( )%6+1); 
}
int main( )
{ 
    int i,s,t,n,success=0;
    float prob;
    cout<<"This program gives probability of a sum of 10 when a die is thrown twice..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
      s=die( ); 
      t=die( );
      if(s+t==10) 
        success++;
    }
    prob=(float)success/n;
    cout<<"Probability is "<<prob;
}
