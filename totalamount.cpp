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
    vector<book> v(25);
    cout<<"Enter no of books details to be given : ";
    cin>>n;
    cout<<"Enter details of "<<n<<" books....\n";
    for(i=0;i<n;i++)
    {
       getchar();
       cout<<"Details of book"<<i+1<<" :\n"<<endl;
       v[i].GetData();  
    }
    cout<<"Displaying details of  books....\n";
    for(i=0;i<n;i++)
    {
       cout<<"BOOK"<<i+1<<" :"<<endl;
       v[i].Display();
       cout<<endl;  
    }
    for(i=0;i<n;i++)
    {
       amount=amount+v[i].GetPrice();
    }
    cout<<"Total amount is rupees "<<amount<<endl;
    return 0;
}