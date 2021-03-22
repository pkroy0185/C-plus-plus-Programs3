#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("One");
    string s2("Two");
    cout<<"Before swapping...\n";
    cout<<"s1 = "<<s1<<"\ts2 = "<<s2<<endl;
    s1.swap(s2);
    cout<<"After swapping...\n";
    cout<<"s1 = "<<s1<<"\ts2 = "<<s2<<endl;
    return 0;
}