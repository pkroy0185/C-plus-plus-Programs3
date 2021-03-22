#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string line,word;
    int countword=0,countline=0;
    cout<<"Enter the string : \n";
    while(getline(cin,line))
    {
        countline++;
        istringstream inputstring(line);
        while(inputstring>>word)
        {
           countword++;
        }
        cout<<countline<<"   "<<countword<<endl;
    }
    cout<<"Total lines is : "<<countline<<endl;
    cout<<"Total words is : "<<countword<<endl;
    return 0;
}