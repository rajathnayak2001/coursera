#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_map<char, char> x;
     x.insert('x','y');
     x.insert('y','x');

     for(auto i=x.begin();i!=x.end();i++)
       cout<<i->first<<" "<<i->second<<endl;
}
