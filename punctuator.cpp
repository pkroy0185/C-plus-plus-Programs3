#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    int len,count=0;
    string::size_type i;
    cout<<"Enter your string :\n";
    getline(cin,str);
    len=str.length();
    for(i=0;i<len;i++)
    {
       if(ispunct(str[i]))
         count++;
       if(isupper(str[i]))
         str[i]=tolower(str[i]);
    }
    cout<<"\nTotal number of punctuators : "<<count<<endl;
    cout<<"Resultant string is \n"<<str<<endl;
    return 0;
}