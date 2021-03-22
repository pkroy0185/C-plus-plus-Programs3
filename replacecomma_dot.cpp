#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    int pos;
    string s2=" ";
    cout<<"Enter the line :\n";
    getline(cin,s1);
    while((pos=s1.find_first_of(s2))!=string::npos)
    {
       s1.replace(pos,1,1,'.');
    }
    cout<<"Modified String is :\n"<<s1<<endl;
    return 0;
}