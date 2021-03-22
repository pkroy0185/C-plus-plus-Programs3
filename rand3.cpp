#include<iostream>
using namespace std;
int die()
{ 
    return(rand()%6+1); 
}
int main()
{ 
    int i,n,success=0,count,total=0,sum=0;
    float p, average;
    cout<<"This program gives probability of an event that sum of numbers on a die exceeds 20 in less than 8 chances and finds average number of throws..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    {
      sum=0;
      count=0;
      do
      { 
        sum=sum+die();
        count++;
      }while(sum<=20);
      total=total+count;
      if(count<8) 
        success++;
    }
    p=(float)success/n;
    average=(float)total/n;
    cout<<"Probability is "<<p<<endl;
    cout<<"Average number of throws is "<<average<<endl;
    return 0;
}
