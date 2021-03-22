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
class test:virtual public student
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
class sports:public virtual student
{
    protected:
        float score;
    public:
        void GetScore()
        {
            cout<<"Enter the score : ";
            cin>>score;
        }
        void DisplayScore()
        {
            cout<<"Sports : "<<score<<endl;
        }
};
class result:public test,public sports
{
    float total;
    public:
         void Display()
         {
            total=sub1+sub2+score;
            cout<<"Total marks : "<<total<<endl;
         }
};
int main()
{
    result S1;
    S1.GetNumber();
    S1.GetMarks();
    S1.GetScore();
    S1.DisplayNumber();
    S1.DisplayMarks();
    S1.DisplayScore();
    S1.Display();
    return 0;
}