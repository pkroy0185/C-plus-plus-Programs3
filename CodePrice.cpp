#include<iostream>
using namespace std;
class item
{
    int code;
    int price;
    public:
       void GetData()
       {
          cin>>code>>price;
       }
       void Display()
       {
          cout<<"Code : "<<code<<endl;
          cout<<"\tPrice : "<<price<<endl;
       }
};
int main()
{
    int i;
    item *p=new item[2];
    item *d=p;
    for(i=1;i<=2;i++)
    {
       cout<<"Enter code and price of "<<i<<" item : ";
       p->GetData();
       p++;
    }
    cout << "Details are .....\n";
    for(i=1;i<=2;i++)
    {
       d->Display();
       d++;
    }
    return 0;
}