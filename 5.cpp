#include<iostream>

void divide(float x, float y)
{
  try
  {
    cout<<"inside try block"<<endl;
    if(y!=0)
    {
      float result = x/y;
      cout<<"result : "<<result<<endl;
    }
    else throw y;           // empty throw shld be only in catch block
      // throw;                    // OTHERWISE ERROR

  }
  cach(float)
  {
    cout<<"excepton caught in func"<<endl;
    throw;        // RE-THROWING
  }
}
int main()
{
  float num,den;
  cout<<"enter numerator and denominator "<<endl;
  cin>>num>>den;

  try
  {
    cout<<"try block in  main"<<endl;
    divide(num,den);
    cout<<"end of try block in main"<<endl;
  }
  catch(float)
  {
    cerr<<"exception - divide by zero"<<endl;
  }
return 0;
}
