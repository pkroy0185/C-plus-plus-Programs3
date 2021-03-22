#include<iostream>
#include<vector>
using namespace std;
class book
{ 
    int    pages;
    float  price;
    string name,author;
    public:
           void  GetData();
           void  Display();
           float GetPrice();
};
void book::GetData()
{
    cout<<"Name : ";
    getline(cin,name);
    cout<<"Author : ";
    getline(cin,author);
    cout<<"Pages : ";
    cin>>pages;
    cout<<"Price : ";
    cin>>price;
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
    int i,n;
    float amount=0;
    book b;
    vector<book> v;
    cout<<"Enter no of books details to be given : ";
    cin>>n;
    cout<<"Enter details of "<<n<<" books....\n";
    for(i=0;i<n;i++)
    {
       getchar();
       cout<<"Details of book"<<i+1<<" :\n"<<endl;
       b.GetData();  
       v.push_back(b);
    }
    cout<<"Displaying details of  books....\n";
    vector<book>::iterator iter;
    for(iter=v.begin();iter!=v.end();iter++)
    {
       cout<<"BOOK"<<i+1<<" :"<<endl;
       iter->Display();
       cout<<endl;  
    }
    for(iter=v.begin();iter!=v.end();iter++)
    {
       amount=amount+iter->GetPrice();
    }
    cout<<"Total amount is rupees "<<amount<<endl;
    return 0;
}