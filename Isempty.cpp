#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n,no;
    vector<int> v1,v2;
    cout<<"How many numbers do you want to give in vector1 : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(i=0;i<n;i++)
    {
       cin>>no;
       v1.push_back(no);
    }
    cout<<"v1 size : "<<v1.size()<<endl;
    cout<<"v2 size : "<<v2.size()<<endl;
    if(v1.empty())
       cout<<"Vector 1 is empty...\n";
    else
       cout<<"Vector 1 is not empty...\n";
    if(v2.empty())
       cout<<"Vector 2 is empty...\n";
    else
       cout<<"Vector 2 is not empty...\n";
    return 0;
}