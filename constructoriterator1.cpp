#include<iostream>
#include<vector>
using namespace std;
class book
{ 
    int    pages;
    float  price;
    string name,author;
    public:
           book(string ,string ,int ,float );
           void  Display();
           float GetPrice();
};
book::book(string n,string a,int pg,float pr)
{
   name=n;
   author=a;
   pages=pg;
   price=pr;
}
void book::Display()
{
    cout<<"Name   : "<<name<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Pages  : "<<pages<<endl;
    cout<<"Price  : "<<price<<endl;
}
float book::GetPrice()
{
    return price;
}
int main()
{
    float amount=0;
    vector<book> v;
    book b1("sai shower1","sai baba",160,45.78);
    book b2("sai shower2","sai baba",260,145.78);
    v.push_back(b1);
    v.push_back(b2);
    vector<book>::iterator iter;
    for(iter=v.begin();iter<v.end();iter++)
    {
       iter->Display();
    }
    for(iter=v.begin();iter<v.end();iter++)
    {
       amount=amount+iter->GetPrice();
    }
    cout<<"Total amount is rupees "<<amount<<endl;
    return 0;
}