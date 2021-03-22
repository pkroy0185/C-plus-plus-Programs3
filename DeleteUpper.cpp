#include<iostream>
#include<string>
using namespace std;

int main()
{
	  string s;
	  string::iterator iter=s.begin();
   cout<<"Enter string :\n";
	  getline(cin,s);
	  while(iter!=s.end())
	  { 
		   if(isupper(*iter))
	   	{
		     	s.erase(iter,iter+1);
		     	iter--;
	   	}	
		   ++iter;
 	 }
   cout<<"Modified String is \n"<<s;
	  return 0;
}