#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="Om Sri ",s2;
    s2.assign(s1);
    cout<<"s1= "<<s1<<endl;
    cout<<"s2= "<<s2<<endl;
    s2.assign(s1,3,3);
    cout<<"s2= "<<s2<<endl;
    s2.assign(9,'#');
    cout<<"s2= "<<s2<<endl;
    string s3="Sai Ram";
    s1.append("Sai Ram");
    cout<<"s1= "<<s1<<endl;
    s1="Om Sri ";
    s1.append(s3,4,3);
    cout<<"s1= "<<s1<<endl;
    s1="Om Sri ";
    s1.append(9,'#');
    cout<<"s1= "<<s1<<endl;
    return 0;
}