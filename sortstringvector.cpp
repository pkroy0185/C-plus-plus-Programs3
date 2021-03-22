#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    string str;
    vector<string> v1,v2;
    v1.push_back("japan");
    v1.push_back("italy");
    v1.push_back("spain");
    v1.push_back("egypt");
    v1.push_back("chile");
    v1.push_back("zaire");
    v1.push_back("nepal");
    v1.push_back("kenya");
    v1.push_back("india");
    v1.push_back("china");
    v1.push_back("malta");
    v1.push_back("syria");
    v2=v1;
    vector<string>::iterator iter;
    cout<<"Without sorting : \n";
    for(iter=v1.begin();iter!=v1.end();iter++)
    {
       cout<<*iter<<endl;
    }
    sort(v1.begin(),v1.end());
    cout<<"Sorted vector is \n";
    for(iter=v1.begin();iter!=v1.end();iter++)
    {
       cout<<*iter<<endl;
    }
    vector<string>::iterator s1,s2;
    s1=find(v2.begin(),v2.end(),"egypt");
    s2=find(v2.begin(),v2.end(),"malta");
    sort(s1,s2);
    cout<<"Partially  sorted vector : \n";
    for(iter=v2.begin();iter!=v2.end();iter++)
    {
       cout<<*iter<<endl;
    }
    return 0;
}