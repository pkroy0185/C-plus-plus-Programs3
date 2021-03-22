#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    cout<<"Enter String : ";
    while(getline(cin,line))
    {   
       cout<<"String is : "<<line<<endl;
       cout<<"Enter String : ";
    }
    return 0;
}