#include<iostream>
using namespace std;
class student
{
    protected:
          int number;
    public:
          void GetNumber()
          {
             cout<<"Enter roll no : ";
             cin>>number;
          }
          void DisplayNumber()
          {
             cout<<"Roll no : "<<number<<endl;
          }
};
class test:public student
{
    protected:
         float sub1,sub2;
    public:
         void GetMarks()
         {
            cout<<"Enter marks of subject1 and subject2 : ";
            cin>>sub1>>sub2;
         }
         void DisplayMarks()
         {
            cout<<"Sub1 : "<<sub1<<"     Sub2 : "<<sub2<<endl;
         }
};
class result:private test
{
    float total;
    public:
         void Display()
         {
            GetNumber();
            GetMarks();
            DisplayNumber();
            DisplayMarks();
            total=sub1+sub2;
            cout<<"Total marks : "<<total<<endl;
         }
};
int main()
{
    result S1;
    S1.Display();
    return 0;
}