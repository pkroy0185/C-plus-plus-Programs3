#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,n,no;
    vector<int> vec;
    cout<<"How many numbers do you want to give : ";
    cin>>n;
    cout<<"Enter your elements : ";
    for(i=0;i<n;i++)
    {
       cin>>no;
       vec.push_back(no);
    }
    vector<int>::iterator iter;
    vector<int>::iterator mid=vec.begin()+vec.size()/2;
    cout<<"middle element is "<<*mid<<endl;
    return 0;
}