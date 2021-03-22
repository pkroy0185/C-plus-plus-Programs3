#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="om sri sai ram";
    string s2("sai");
    cout<<s1<<endl<<s2<<endl;
    cout<<s1.find("sri")<<endl;
    cout<<s1.find(s2)<<endl;
    cout<<s1.find('a')<<endl;
    cout<<s1.find_first_of('s')<<endl;
    cout<<s1.find_last_of('s')<<endl;
    cout<<s1.find('m')<<endl;
    cout<<s1.find('m',5)<<endl;
    if(s1.find('k')==string::npos)
      cout<<"Not Found...\n";
    else
      cout<<"Found...\n";
    cout<<s1.find('k')<<endl;
    return 0;
}