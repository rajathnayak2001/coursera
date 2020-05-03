#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int smallest,largest=1;
   int i,j;
   int a[100000];
   int n;
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   int count=0;
    smallest=n;
   i=0;
   while(i<n)
   {
      count=1;
      j=i;
      while(abs(a[j]-a[j+1])<=2 && j<n-1)
      {
         count++;
         j++;
      }
      if(count<smallest)
      smallest=count;
      if(count>largest)
      largest=count;

      i=j+1;
   }
   cout<<smallest<<" "<<largest<<endl;
   }
   return 0;
}
