#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str[20],largest,smallest;
    int i,n;
    cout<<"How many strings do you want to enter(less than 20) : ";
    cin>>n;
    getchar();
    cout<<"Enter 1 string :\n";
    getline(cin,str[0]);
    largest=str[0];
    smallest=str[0];
    for(i=1;i<n;i++)
    {
       cout<<"Enter "<<i+1<<" string :\n";
       getline(cin,str[i]);
       if(str[i].length()>largest.length())
         largest=str[i];
       else
         if(str[i].length()<smallest.length())
           smallest=str[i];
    }
    cout<<"Largest string : \n"<<largest<<endl;
    cout<<"Smallest string : \n"<<smallest<<endl;
    return 0;
}