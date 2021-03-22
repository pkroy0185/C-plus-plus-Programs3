#include<iostream>
using namespace std;

void function(int x)
{
  try
  {
    if(x==1)  throw x;
    else
      if(x==0)
        throw 'x';
    else
      if(x==-1)
        throw 1.0;
    else
        throw "scs";


    cout<<"end of try block";
  }
  //catch(...) {cout<<"all exception catch"<<endl;} // MUST BE THE LAST HANDLER, OTHERWISE ERROR
  catch(char c) {cout<<"character"<<endl;}
  catch(int m)  {cout<<"integer"<<endl;}
  catch (...) {cout<<"all exception catch"<<endl;} // MUST BE THE LAST HANDLER, OTHERWISE ERROR

}

int main()
{
  cout<< "x = 1"<<endl;  function(1);
  cout<< "x = 0"<<endl;
  function(0);
  cout<< "x = -1"<<endl;
  function(-1);
  cout<< "x = 3"<<endl;
  function(3);

}
