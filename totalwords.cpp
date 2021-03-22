#include<iostream>
using namespace std;

int main()
{
    string str,word;
    int count=0;
    cout<<"Enter the string : ";
    while(cin>>word)
    {
        count++;
    }
    cout<<"Total words is : "<<count<<endl;
    return 0;
}