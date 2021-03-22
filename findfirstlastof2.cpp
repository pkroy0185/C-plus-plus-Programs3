#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="the end of education is character";
    string s2="zyphabc";
    cout<<"String is :\n"<<s1<<endl;
    cout<<"Find First Of  :\n";
    cout<<s1.find_first_of(s2)<<endl;
    cout<<"Find Last Of  :\n";
    cout<<s1.find_last_of(s2)<<endl;
    cout<<"Find First Not Of  :\n";
    cout<<s1.find_first_not_of(s2)<<endl;
    cout<<"Find Last Not Of  :\n";
    cout<<s1.find_last_not_of(s2)<<endl;
    return 0;
}