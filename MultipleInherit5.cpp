#include<iostream>
using namespace std;
class student
{
    protected:
          int number;
    public:
          void GetData()
          {
             cout<<"Enter roll no : ";
             cin>>number;
          }
          void Display()
          {
             cout<<"Roll no : "<<number<<endl;
          }
};
class test
{
    protected:
         float sub1,sub2;
    public:
         void GetData()
         {
            cout<<"Enter marks of subject1 and subject2 : ";
            cin>>sub1>>sub2;
         }
         void Display()
         {
            cout<<"Sub1 : "<<sub1<<"     Sub2 : "<<sub2<<endl;
         }
};
class result:public student,public test
{
    float total;
    public:
         void Display()
         {
            
            total=sub1+sub2;
            cout<<"Total marks : "<<total<<endl;
         }
};
int main()
{
    result S1;
    S1.student::GetData();
    S1.test::GetData();
    S1.student::Display();
    S1.test::Display();
    S1.Display();
    return 0;
}