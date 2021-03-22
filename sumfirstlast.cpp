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
    
    vector<int>::iterator iter1,iter2;
    iter1=vec.begin();
    iter2=vec.end()-1;
    cout<<"Required Sum vector is :\n";
    for(iter1,iter2;iter1<iter2;iter1++,iter2--)
       cout<<(*iter1)+(*iter2)<<"    ";
    if(iter1==iter2)
    {
      cout<<*iter1<<"    ";
      cout<<"\nVector has odd number of elements...\n";
    }
    cout<<endl;
    return 0;
}