#include<iostream>
#include<vector>
/*using std::cout;
using std::cin;
using std::endl;*/
using namespace std;
int main()
{
    int i,no;
    vector<int> vec1(5);
    for(i=0;i<5;i++)
       cout<<vec1[i];
    cout<<"\nEnter the Elements of the vector : \n";
    for(i=0;i<5;i++)
    {
      cin>>no;
      vec1.push_back(no);
    }
    vector<int> vec2(vec1);
    cout<<"Elements of the vector are : \n";
    for(i=0;i<10;i++)
       cout<<vec2[i]<<"   ";
    return 0;
}