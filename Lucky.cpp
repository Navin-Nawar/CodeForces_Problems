#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        int t1=0,t2=0;
        cin>>s;
        for(i=0;i<=2;i++)
        {
            t1+=s[i]-'0';
        }
        for(i=s.length()-3;i<s.length();i++)
        {
            t2+=s[i]-'0';
        }
        if(t1==t2)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
    return 0;
}