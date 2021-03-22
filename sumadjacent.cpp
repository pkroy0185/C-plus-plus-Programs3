#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n,no;
    vector<int> vec;
    cout<<"How many numbers do you want to give : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(i=0;i<n;i++)
    {
       cin>>no;
       vec.push_back(no);
    }
    
    vector<int>::iterator iter,len;
    
    if(n%2==0)
      len=vec.end();
    else
      len=vec.end()-1;
    for(iter=vec.begin();iter!=len;iter++)
       cout<<(*iter)+(*(++iter))<<"    ";
    if((iter==len)&&(n%2!=0))
    {
      cout<<*iter<<"    ";
      cout<<"\nVector has odd number of elements...\n";
    }
    return 0;
}