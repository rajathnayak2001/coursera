#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll a,ll b)
{
  if(a==0)
  return b;
  if(b==0)
  return a;
 return gcd(b,a%b);

}
ll lcm(ll a, ll b)
{
   return ((a*b)/gcd(a,b));
}
ll lcmarray(int a[],int n)
{
   ll ans=a[0];
   for(int i=0;i<n;i++)
   {
     ans= (((a[i] * ans)) /
				(gcd(a[i], ans)));
   }
   return ans;
}


int main()
{
   int n,m,n1;
   int a[10000],b[10000];;
   cin>>n>>m;

   int i,j;
   for(i=0;i<n;i++)
    {
      cin>>a[i];

    }
   ll ans=lcmarray(a,n);
   ll ans1;
   set < pair<int,int> > y;
   for(i=1;i<=m;i++)
   {
      ans1=lcm(i,ans);
      y.insert(make_pair(i,ans1));
     }

   for(auto itr=y.begin();itr!=y.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

   return 0;
}
