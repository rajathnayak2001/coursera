#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a = { 1, 45, 54, 71, 76, 12 };
  sort(a.begin(),a.end(),greater<int>());
  for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}
