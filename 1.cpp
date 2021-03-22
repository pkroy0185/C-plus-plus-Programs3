#include<iostream>

void divide(float x, float y)
{
  cout<<"inside func : "<<endl;

  if(y!=0)
  {
    float result = x/y;
    cout<<"result : "<<result<<endl;
  }
  else throw "divide by zero";
}

int main()
{
  float num,den;
  cout<<"enter numerator and denominator "<<endl;
  cin>>num>>den;

  try
  {
    cout<<"try block"<<endl;
    divide(num,den);
  }

  catch(const char *msg)
  {
    cerr<<msg<<endl;
  }

}
