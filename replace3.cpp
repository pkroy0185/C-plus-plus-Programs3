#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="hare rama hare Krishna";
    string s2="sai";
    string s3=".,'";
    s1.replace(10,4,s2);
    s1.replace(0,4,s2);
    cout<<s1<<endl;
    return 0;
}