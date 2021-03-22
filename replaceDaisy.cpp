#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="Dear Ms Daisy:";
    string s2="MrsMSMissPeople";
    string s3="AnnaP";
    s1.replace(8,6,s3);
    cout<<s1<<endl;
    return 0;
}