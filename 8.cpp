#include<iostream>
using namespace std;

// EXEPTION SPECIFICATION

// TERMINATES ON ABNORMAL THROW

void function(int x) throw(int, double)     // DOSENT THROW character
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
  }
    catch(int c)
    {
      cout<<"integer"<<endl;
    }

  try
  {
    cout<<"x == 2"<<endl;
    function(2);
  }
    catch(double c)
    {
      cout<<"double"<<endl;
    }

  try
  {
    cout<<"x == 1"<<endl;
    function(1);
  }
    catch(char c)
    {
      cout<<"character"<<endl;
    }

    cout<<"x == 3"<<endl;
    function(3);
    cout<<"end of main function"<<endl;
}
