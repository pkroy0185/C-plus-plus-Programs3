#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s5,s6,s7;
    string s2="Sai Ram";
    string s3("Krishna");
    string s4(s3);
    s1=s2;
    cout<<"s1 = "<<s1<<"\ns2 = "<<s2<<endl;
    cout<<"s3 = "<<s3<<"\ns4 = "<<s4<<endl;
    s5=s2+s3;
    cout<<"s5 = "<<s5<<endl;
    s6="Om Sri "+s2;
    cout<<"s6 = "<<s6<<endl;
    s7="Hare Rama "+s2+"Hare Krishna";
    s4=s2+"Hare Rama "+"Hare Krishna";
    cout<<"s7 = "<<s7<<"\ns4 = "<<s4<<endl;
    string s8("Help ever Hurt never");
    cout<<"s8 = "<<s8<<endl;
    string s9(s8,0,9);
    cout<<"s9 = "<<s9<<endl;
    string s10(s8,10,10);
    cout<<"s10 = "<<s10<<endl;
    string s11(9,'#');
    cout<<"s11 = "<<s11<<endl;
    return 0;
}