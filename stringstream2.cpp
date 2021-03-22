#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input("Input test M 123 4.7 A");
    istringstream inputstring(input);
    string s1,s2,s3;
    int i;
    double d;
    char c;
    inputstring>>s1>>s2>>c>>i>>d>>s3;
    cout<<"The following elements are extracted..."<<endl;
    cout<<"String 1 : "<<s1<<endl;
    cout<<"String 2 : "<<s2<<endl;
    cout<<"Char     : "<<c<<endl;
    cout<<"Int      : "<<i<<endl;
    cout<<"Double   : "<<d<<endl;
    cout<<"String 3 : "<<s3<<endl;
    if(inputstring.good())
      cout<<"Input string is not empty.."<<endl;
    else
      cout<<"Input string is empty.."<<endl;
    return 0;
}