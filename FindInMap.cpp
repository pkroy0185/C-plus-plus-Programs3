#include<iostream>
#include<map>
using namespace std;

int main()
{
    string name;
    int no;
    typedef map<string,int> phonebook;
    phonebook phone;
    phone.insert(pair<string,int>("Om",1111));
    phone.insert(pair<string,int>("Sri",2222));
    phone.insert(pair<string,int>("Sai",3333));
    phone.insert(pair<string,int>("Ram",4444));
    phone["sssihl"]=9999;
    cout<<"Map size : "<<phone.size()<<endl;
    map<string,int>::iterator iter;
    for(iter=phone.begin();iter!=phone.end();iter++)
       cout<<(*iter).first<<"     "<<(*iter).second<<endl;
    cout<<"After changing the value of sssihl....\n";
    phone["sssihl"]=5555;
    cout<<"Map size : "<<phone.size()<<endl;
    for(iter=phone.begin();iter!=phone.end();iter++)
       cout<<(*iter).first<<"     "<<(*iter).second<<endl;
    cout<<"Enter the name to find : ";
    cin>>name;
    iter=phone.find(name);
    if(iter==phone.end())
      cout<<"Not Found\n";
    else
      cout<<"Name : "<<iter->first<<"    Number : "<<iter->second<<endl;
    return 0;
}