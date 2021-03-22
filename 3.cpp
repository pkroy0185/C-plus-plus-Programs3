// CATCH ALL THE EXEPTIONS

void test(int x)
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

    cout<<"end of try block";
  }

  catch(...)      // CATCH ALL THE EXEPTIONS
  {
      cout<<"exception caught"<<endl;
  }

}

int main()
{
  test(1);
  test(-1);
  test(0);
  test(3);
}
