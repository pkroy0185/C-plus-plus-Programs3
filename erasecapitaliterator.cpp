#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string :\n";
    getline(cin,str);
    string::iterator iter=str.begin();
    while(iter!=str.end())
    {
       if(isupper(*iter))
         (*iter)=' ';
       ++iter;
    }
    cout<<"After erasing capital letters :\n"<<str<<endl;
    return 0;
}