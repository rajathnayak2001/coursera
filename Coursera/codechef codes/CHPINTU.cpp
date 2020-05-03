#include<bits/stdc++.h>
using namespace std;
int main()
{
   unordered_map <int,int>m;
   int a[]={10,20,02,10,10,20,5,20};
   int n=8;
   for(int i=0;i<n;i++)
   m[a[i]]++;
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
        m.erase(5);
       for (auto x : m)
        cout << x.first << " " << x.second << endl;
}
