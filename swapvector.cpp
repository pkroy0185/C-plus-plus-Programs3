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
    cout<<"Elements of vector 1 : ";
    vector<int>::iterator iter;
    for(iter=v1.begin();iter!=v1.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    cout<<"How many numbers do you want to give in vector2 : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(i=0;i<n;i++)
    {
       cin>>no;
       v2.push_back(no);
    }
    cout<<"Elements of vector 2 : ";
    for(iter=v2.begin();iter!=v2.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    v1.swap(v2);
    cout<<"After swapping....\n";
    cout<<"Elements of vector 1 : ";
    for(iter=v1.begin();iter!=v1.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl<<endl;
    cout<<"Elements of vector 2 : ";
    for(iter=v2.begin();iter!=v2.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    return 0;
}