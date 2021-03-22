#include<iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    public:
       void GetData()
       {
          cout<<"Name : ";
          cin>>name;
          cout<<"Age : ";
          cin>>age;
       }
       void Display()
       {
          cout<<"\nName : "<<name<<endl;
          cout<<"\tAge : "<<age<<endl;
       }
       person Greater(person ,person );
};
person person::Greater(person p1,person p2)
{
    return (p1.age>p2.age?p1:p2);
}
int main()
{
    int i;
    person p1,p2,p3,p4;
    cout<<"Person 1 :\n";
    p1.GetData();
    cout<<"Person 2 :\n";
    p2.GetData();
    cout<<"Person 3 :\n";
    p3.GetData();
    p4=p1.Greater(p1,p2);
    cout<<"Elder person is ";
    p4.Display();
    p4=p2.Greater(p2,p3);
    cout<<"Elder person is ";
    p4.Display();
    return 0;
}