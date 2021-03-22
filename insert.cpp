#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("We can insert a string.");
    string s2("a string into ");
    s1.insert(14,s2);
    cout<<s1<<endl;
    s1="We can insert a string.";
    s1.insert(14,"into ");
    cout<<s1<<endl;
    s1="We can insert a string.";
    s1.insert(14,9,'#');
    s1.insert(23," ");
    cout<<s1<<endl;
    return 0;
}