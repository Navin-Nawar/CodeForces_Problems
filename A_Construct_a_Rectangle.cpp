#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   long long l1,l2,l3;
   cin>>l1>>l2>>l3;
   bool ok=false;
   if((l1==l2 && l3%2==0)||(l2==l3 && l1%2==0)||(l1==l3 && l2%2==0))
   ok=true;
   if((l2+l3==l1)||(l1+l3==l2)||(l1+l2==l3))
   ok=true;
   cout<<(ok?"YES\n":"NO\n");
  }
   return 0;
}