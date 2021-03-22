#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int val1=512,val2=1024;
    ostringstream format_message;
    format_message<<"Val1: "<<val1<<endl<<"Val2: "<<val2<<endl;
    cout<<format_message.str()<<endl;
    istringstream input_istring(format_message.str());
    string s1,s2;
    int no1,no2;
    input_istring>>s1>>no1>>s2>>no2;
    cout<<s1<<" "<<no1<<endl;
    cout<<s2<<" "<<no2<<endl;
    return 0;
}