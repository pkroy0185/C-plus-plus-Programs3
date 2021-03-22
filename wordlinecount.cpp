#include<iostream>
using namespace std;

int main()
{
    string str1,str,word;
    int countword=0,countline=0;
    cout<<"Enter the string : \n";
    while(getline(cin,str))
    {
        countline++;
        
        while(1)
        {
           str1=str;
           str=str.substr(str.find(' ')+1);
           if(str==str1)
           {
             countword++;
             break;
           }
           countword++;
        }
        cout<<countline<<"   "<<countword<<endl;
    }
    cout<<"Total lines is : "<<countline<<endl;
    cout<<"Total words is : "<<countword<<endl;
    return 0;
}