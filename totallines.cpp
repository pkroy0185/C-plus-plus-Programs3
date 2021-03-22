#include<iostream>
using namespace std;

int main()
{
    string str;
    int count=0;
    cout<<"Enter the string : ";
    while(getline(cin,str))
    {
        count++;
    }
    cout<<"Total lines is : "<<count<<endl;
    return 0;
}