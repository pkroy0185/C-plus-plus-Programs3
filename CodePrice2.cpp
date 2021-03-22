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
          cout<<"\n\tCode : "<<code<<endl;
          cout<<"\tPrice : "<<price<<endl;
       }
};
int main()
{
    int i;
    item *p[4];
    for(i=0;i<4;i++)
    {
       p[i]=new item;
       cout<<"Enter code and price of "<<i+1<<" item : ";
       p[i]->GetData();
    }
    cout << "Details are .....\n";
    for(i=0;i<4;i++)
    {
       cout<<"Item "<<i+1;
       p[i]->Display();
    }
    return 0;
}