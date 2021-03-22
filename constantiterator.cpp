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
    vector<int>::const_iterator iter;
    /*for(iter=vec.begin();iter!=vec.end();iter++)
    {
       *iter=*iter * 2;          //Error: can't change value using constant iterator
    } */
    cout<<"Elements of the vector are : \n";
    for(iter=vec.begin();iter!=vec.end();iter++)
    {
       cout<<*iter<<"   ";
    }
    cout<<endl;
    return 0;
}