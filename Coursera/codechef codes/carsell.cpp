#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int a[1000000];
  int n,i,j,k,sum=0;
  cin>>t;
  while(t--)
  {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n,greater <int>());
  for(i=0;i<n;i++)
  {
      if(a[i]-i>0)
      {
        a[i]=a[i]-i;
      }
      else
      {
       a[i]=0;
      }
  }
  for(i=0;i<n;i++)
    sum+=a[i];
    cout<<sum<<endl;
   }
   return 0;
}
