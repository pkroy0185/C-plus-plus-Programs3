#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    ostringstream outputstring;
    string s1("Output of several data types to an ostringstream object:\n");
    string s2("\nINT : ");
    string s3("\nDouble : ");
    string s4("\nAddress of INT : ");
    double d=123.67;
    int i=22;
    outputstring<<s1<<s2<<i<<s3<<d<<s4<<&i;
    cout<<outputstring.str();
    outputstring<<"\nAdding more characters.";
    cout<<"\nAfter adding more characters..\n"<<endl;
    cout<<outputstring.str()<<endl;
    return 0;
}