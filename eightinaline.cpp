#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,no;
    vector<string> vec;
    string word;
    cout<<"Enter your string (Enter # as terminating string): ";
    while(cin>>word)
    {
       if(word=="#")
         break;
       vec.push_back(word);
    }
    vector<string>::iterator iter;
    for(iter=vec.begin();iter!=vec.end();iter++)
    {
      word=*iter;
      for(i=0;i<word.length();i++)
         if(islower(word[i]))
           word[i]=toupper(word[i]);
      *iter=word; 
    }
    for(i=1,iter=vec.begin();iter!=vec.end();iter++,i++)
    {  
       cout<<*iter<<" ";
       if(i%8==0)
         cout<<endl;
    }
    cout<<endl;
    return 0;
}