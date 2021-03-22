#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int i;
    cout<<"Enter string ( terminating char is #):\n";
    getline(cin,str,'#');
    cout<<"Printing string characterwise :\n";
    for(i=0;i<str.length();i++)
       cout<<str.at(i)<<"  ";
    cout<<endl;
    return 0;
}