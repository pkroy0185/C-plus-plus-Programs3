#include<iostream>
#include<map>
using namespace std;

int main()
{
    string word;
    int no;
    map<string,int> wc;
    cout<<"This program finds the frequency of all words..."<<endl;
    cout<<"Enter your string :\n";
    while(cin>>word)
    {
       ++wc[word];
    }
    map<string,int>::iterator iter;
    iter=wc.begin();
    while(iter!=wc.end())
    {
       cout<<iter->first<<"   occurs   "<<iter->second<<"   times.\n";
       iter++;
    }
    return 0;
}