#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="hare rama hare Krishna";
    string s2="om sri sai ram";
    s1.replace(10,4,s2,7,3);
    cout<<s1<<endl;
    s1="hare rama hare Krishna";
    s1.replace(10,4,5,'#');
    cout<<s1<<endl;
    return 0;
}