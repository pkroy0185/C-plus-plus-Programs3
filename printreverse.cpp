#include<iostream>
#include<string>
using namespace std;

int main()
{
    string names[10];
    int i;
    cout<<"Enter 5 strings..\n";
    for(i=0;i<5;i++)
       getline(cin,names[i]);
    cout<<"Printing strings in reverse...\n";
    for(i=4;i>=0;i--)
       cout<<names[i]<<endl;
    return 0;
}