#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,no;
    vector<int> vec1(10,9);
    vector<int>::iterator iter;
    cout<<"Elements of the vector1 are : \n";
    for(iter=vec1.begin();iter<vec1.end();iter++)
       cout<<*iter<<"   ";
    vector<char> vec2(10,'p');
    vector<char>::iterator iter1;
    cout<<"\nElements of the vector2 are : \n";
    for(iter1=vec2.begin();iter1<vec2.end();iter1++)
       cout<<*iter1<<"   ";
    return 0;
}