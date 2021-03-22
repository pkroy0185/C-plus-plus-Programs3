#include<iostream>
using namespace std;
int coin()
{ 
   int t=rand()%17;
   if(t<7) 
     return 0; 
   else 
     return 1;
}
int main()
{ int i,s,t,n,success=0;
  float prob;
  cout<<"This program finds the probability of getting both head when a biased coin ( p(H)=7/17) is tossed twice..."<<endl;
  cout<<"Give n (number of experiments) : ";
  cin>>n; 
  for(i=1;i<=n;i++)
  { 
    s=coin(); 
    t=coin();
    if((s==0)&&(t==0)) 
    success++;
  }
  cout<<"Required Probability is "<<(float)success/n;
}

