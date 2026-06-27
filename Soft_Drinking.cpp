#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a1,a2,a3,minval;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a1=(k*l)/nl;
    a2=c*d;
    a3=p/np;
    minval=min({a1,a2,a3});
    cout<<minval/n<<endl;
    return 0;
}