#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,word1,word2;
    cout<<"Enter the line :\n";
    getline(cin,s1);
    cout<<"Enter the word to be replaced :";
    cin>>word1;
    cout<<"Enter the word to  replace :";
    cin>>word2;
    if(s1.find(word1)==string::npos)
      cout<<word1<<" is not present in the string...\n";
    else
    {
      s1.replace(s1.find(word1),word1.length(),word2);
      cout<<"Modified String is :\n"<<s1<<endl;
    }
    return 0;
}