#include<iostream>
using namespace std;

// EXEPTION SPECIFICATION

// TERMINATES ON ABNORMAL THROW

void function(int x) throw(char, double)     // DOSENT THROW INTEGER
{
  if(x==0) throw x;
  if(x==1)  throw 'x';
  if(x==2)  throw 1.234;

  cout<<"end of function"<<endl;
}

int main()
{
  try
  {
    cout<<"x == 0"<<endl;
    function(0);
    cout<<"x == 1"<<endl;
    function(1);
    cout<<"x == 2"<<endl;
    function(2);
    cout<<"x == 3"<<endl;
    function(3);
  }
  catch(char c)
  {
    cout<<"character"<<endl;
  }

  catch(int c)
  {
    cout<<"integer"<<endl;
  }

  catch(double c)
  {
    cout<<"double"<<endl;
  }

cout<<"end of main function"<<endl;
}
