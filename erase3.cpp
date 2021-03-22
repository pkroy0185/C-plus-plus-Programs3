#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="om sri sai ram";
    s1.erase(0,7);
    cout<<s1<<endl;
    s1="om sri sai ram";
    s1.erase(7,7);
    cout<<s1<<endl;
    s1="om sri sai ram";
    s1.erase(7,4);
    cout<<s1<<endl;
    s1="om sri sai ram";
    s1.erase(3,4);
    cout<<s1<<endl;
    return 0;
}