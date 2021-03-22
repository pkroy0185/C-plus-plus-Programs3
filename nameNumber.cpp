#include<iostream>
#include<map>
using namespace std;

int main()
{
    string name;
    int no;
    map<string,int> phone;
    phone.insert(pair<string,int>("Sai",1111));
    phone.insert(pair<string,int>("Sri",2222));
    phone.insert(pair<string,int>("Ram",3333));
    phone.insert(pair<string,int>("Krishna",4444));
    phone.insert(make_pair<string,int>("Hare",5555));
    phone.insert(make_pair<string,int>("Rama",6666));
    phone.insert(make_pair<string,int>("Hare",7777));
    phone.insert(make_pair<string,int>("Krishna",8888));
    phone["Murga"]=9999;
    phone["murga"]=9999;
    cout<<"Map size : "<<phone.size()<<endl;
    map<string,int>::iterator iter;
    for(iter=phone.begin();iter!=phone.end();iter++)
       cout<<(*iter).first<<"     "<<(*iter).second<<endl;
    cout<<"Enter name to search : ";
    cin>>name;
    cout<<"Name : "<<name<<"     Number : "<<phone[name]<<endl;
    cout<<"After Searching....\n";
    cout<<"Map size : "<<phone.size()<<endl;
    for(iter=phone.begin();iter!=phone.end();iter++)
       cout<<(*iter).first<<"     "<<(*iter).second<<endl;
    return 0;
}