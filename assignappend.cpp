#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1("When lilacs last in the dooryard bloom'd");
    string s2("The child is father of the man");
    string str;
    str.assign(s2,0,13);
    str.append(s1,17,16);
    cout<<str<<endl;
    return 0;
}