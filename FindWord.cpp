#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line,word;
    cout<<"Enter the line :\n";
    getline(cin,line);
    cout<<"Enter the word :\n";
    cin>>word;
    if(line.find(word)!=string::npos)
       cout<<"Found";
    else
       cout<<"Not Found";
    return 0;
}