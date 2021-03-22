#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    string str2("Om Sri Sai Ram\n");
    if(!str1.length())
      cout<<"String is Empty..\n";
    else
      cout<<"String is Not Empty..\n";
    if(str2.length())
      cout<<"String is Not Empty..\n";
    else
      cout<<"String is Empty..\n";
    return 0;
}