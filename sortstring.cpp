#include<iostream>
#include<string>
using namespace std;
void Ascending(string str[],int n)
{
    int i,j,minpos,min;
    string temp;
    for(i=0;i<n;i++)
    {
       min=str[i].length();
       for(j=i+1;j<n;j++)
          if(str[j].length()<min)
          {
             min=str[j].length();
             minpos=j;
          }
       if(min!=str[i].length())
       {
          temp=str[i];
          str[i]=str[minpos];
          str[minpos]=temp;
       }
    }
}
void Descending(string str[],int n)
{
    int i,j,maxpos,max;
    string temp;
    for(i=0;i<n;i++)
    {
       max=str[i].length();
       for(j=i+1;j<n;j++)
          if(str[j].length()>max)
          {
             max=str[j].length();
             maxpos=j;
          }
       if(max!=str[i].length())
       {
          temp=str[i];
          str[i]=str[maxpos];
          str[maxpos]=temp;
       }
    }
}
int main()
{
    string str[20];
    int i,n,choice;
    cout<<"How many strings do you want to enter(less than 20) : ";
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
       cout<<"Enter "<<i+1<<" string :\n";
       getline(cin,str[i]);
    }
    cout<<"Enter 1 to sort in ascending and 2 to sort in descending order of their lengths : ";
    cin>>choice;
    switch(choice)
    {
       case 1:
              Ascending(str,n);
              break;
       case 2:
              Descending(str,n);
              break;
       Default:
              cout<<"Wrong choice...\n";
    }
    cout<<"\nSorted Strings are : \n\n";
    for(i=0;i<n;i++)
    {
       cout<<str[i]<<endl;
    }
    return 0;
}