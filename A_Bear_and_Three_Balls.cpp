#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    bool found=false;
    for(int i=0;i<n;i++)
    {
        int count=1;
        
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]>2)
            {
                
                break;
            }
            else if(a[j]==a[j-1])
            continue;
            else
            {
            count++;
            if(count==3)
            {
                cout<<"YES"<<endl;
                found=true;
                break;
            }
        }
        }
        if(found)
        break;
    }
    if(found==false)
    cout<<"NO"<<endl;
    return 0;
}