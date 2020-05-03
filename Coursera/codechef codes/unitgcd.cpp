#include<bits/stdc++.h>

using namespace std;
int largest(int a[],int n)
{
   int i=0;
   int largest=a[0];
   int index=0;
   for(i=0;i<n;i++)
   {
     if(a[i]>largest)
     {
        largest=a[i];
        index=i;
     }
   }
   return index;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n,z;
     cin>>n>>z;
     int a[10000];
     int sum=0;
     int i,j;
     for(i=0;i<n;i++)
     {
       cin>>a[i];
       sum+=a[i];
     }
     if(sum<z)
     cout<<"evacuate"<<endl;
     else
     {
        int flag=0;
        int count=0;
        while(z>0)
        {
           i=largest(a,n);
           z=z-a[i];
           a[i]=a[i]/2;
           sum-=a[i]/2;
           if(sum<z)
           {
            flag=1;
            break;
           }
           count++;
        }
        if(flag==1)
         cout<<"evacuate"<<endl;
        else
         cout<<count<<endl;

     }
   }
   return 0;
}
