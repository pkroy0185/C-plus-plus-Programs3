#include<iostream>
using namespace std;

int main()
{
    string s("Testing Iterators");
    string::iterator iter=s.begin();
    cout<<"s = "<<s<<"\n(Using Iterators) s is : ";
    while(iter!=s.end())
    {
       cout<<*iter;
       ++iter;
    }
    cout<<endl;
    return 0;
}