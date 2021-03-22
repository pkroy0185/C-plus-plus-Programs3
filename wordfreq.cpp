#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line,word;
    int pos=0,count=0,k;
    cout<<"Enter the line :\n";
    getline(cin,line);
    cout<<"Enter the word :\n";
    cin>>word;
    while((k=line.find(word,pos))!=string::npos)
    {
       pos=k+word.length();
       count++;
    }
    cout<<"Frequency of word is "<<count<<endl;
    return 0;
}