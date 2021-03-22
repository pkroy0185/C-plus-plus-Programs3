#include<iostream>
#include<string>
using namespace std;

int main()
{
    string substr="Hello";
    string phrase="Hello World";
    string slang="Helloo";
    
    if(substr<phrase)
      cout<<"Substr is smaller..\n";
    if(slang>substr)
      cout<<"slang is greater..\n";
    if(slang>phrase)
      cout<<"slang is greater..\n";
    return 0;
}