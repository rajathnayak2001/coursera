#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      string s;
      cin>>n>>s;
      int n1=s.size();
      int i=0;
      int pos=n1-1;
      int counta=0,countb=0,maxcounta=n1/2,maxcountb=n1/2,turna=0,turnb=0;
      while(i<n1)
      {
            if(i%2==0)
            {
               turna++;
               if(s[i]=='1')
                 counta++;
            }
            else
            {
              turnb++;
              if(s[i]=='1')
                countb++;
            }
            if(counta>countb && (maxcountb-turnb<counta))
            {
               pos=i;
               break;
            }
            else
            {
              if(counta<countb && (maxcounta-turna<countb))
              {
                pos=i;break;
              }
            }
            //cout<<counta<<" "<<turna<<" "<<countb<<" "<<turnb<<endl;
            i++;
      }
      cout<<pos+1<<endl;

    }

    return 0;
      }


