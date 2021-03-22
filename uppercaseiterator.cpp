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
       if(islower(*iter))
         (*iter)=toupper(*iter);
       ++iter;
    }
    cout<<"After converting to upper case :\n"<<str<<endl;
    return 0;
}