#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a[1000000];
    int n,k;
    cin>>n>>k;
    int i,j,flag=0;
    for(i=1;i<=n;i++)
    cin>>a[i];
    if(k==1)
    {
      cout<<"yes"<<endl;
    }
    else
    {
    for(i=1;i<=n-1;i++)
    {
       if(a[i]!=i)
       {
          if(abs(a[i]-i)%k!=0)
          {
            flag=1;
            break;
          }
       }
    }
    if(flag==1)
    cout<<"no"<<endl;
    else
    cout<<"yes"<<endl;

    }
    }
   return 0;
}
