#include<iostream>
using namespace std;

int main()
{
    string s("Testing Iterators");
    string:: reverse_iterator iter=s.rbegin();
    cout<<"s = "<<s<<"\n(Using Iterators) s is : ";
    while(iter!=s.rend())
    {
       cout<<*iter;
       ++iter;
    }
    cout<<endl;
    return 0;
}