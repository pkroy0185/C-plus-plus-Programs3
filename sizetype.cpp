#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str("Om Sri Sai Ram");
    string::size_type i;
    for(i=0;i!=str.length();i++)
        cout<<str[i]<<"   ";
    cout<<endl;
    for(i=0;i!=str.length();i++)
        str[i]='#';
    cout<<str;
    return 0;
}