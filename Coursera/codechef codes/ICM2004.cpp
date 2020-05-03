#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
  return a;
  else
  return (b,a%b);
}
void add0s(int a[],int n1,int n2)
{
 int diff=n1-n2;
 int i,j,k,temp;

 int g=gcd(diff,n1);

 for(i=0;i<g;i++)
 {
    temp=a[i];
    j=i;
    while(1)
    {
       k=j+diff;
       if(k>=n1)
       k=k-n1;
       if(k==i)
       break;
       a[j]=a[k];
       j=k;
    }
    a[j]=temp;
 }
 for(i=0;i<n1;i++)
 cout<<a[i];
}
int main()
{

  int a,b;
  int x[1000],y[1000];
  int i,j;
  cin>>a>>b;
  i=0;
  int n1=4,n2=0;


  while(b)
  {

    int c=b%2;
    y[i++]=c;
    b=b/2;
  }
  for(i=0;i<n2;i++)
  {
  cout<<y[i];
  cout<<"Hai";
  }
  reverse(y,y+n2);
  for(i=0;i<n2;i++)
  {
  cout<<y[i];
  cout<<"Hai";
  }
  cout<<endl;
  add0s(y,n1,n2);
}
