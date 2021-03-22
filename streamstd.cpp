#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int i,val;
    std::string stringvalues="125 320 512 750 333";
    std::istringstream iss(stringvalues);
    for(i=0;i<5;i++)
    {
       iss>>val;
       std::cout<<val*2<<endl;
    }
    return 0;
}