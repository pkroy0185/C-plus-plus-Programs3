#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n;
    string str;
    vector<string> v;
    cout<<"Enter your words : ";
    for(i=0;i<5;i++)
    {
       cin>>str;
       v.push_back(str);
    }
    vector<string>::iterator iter;
    for(iter=v.begin();iter!=v.end();iter++)
    {
       cout<<*iter<<endl;
    }
    return 0;
}