#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,no;
    vector<int> vec1;
    vector<int>::iterator iter;
    for(iter=vec1.begin();iter<vec1.end();iter++)
       cout<<*iter<<"   ";
    cout<<"\nEnter the Elements of the vector : \n";
    for(i=0;i<5;i++)
    {
      cin>>no;
      vec1.push_back(no);
    }
    vector<int> vec2(vec1);
    cout<<"Elements of the vector are : \n";
    for(iter=vec2.begin();iter<vec2.end();iter++)
       cout<<*iter<<"   ";
    return 0;
}