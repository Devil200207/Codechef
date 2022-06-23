#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  string s;
  cin>>s;

  for(int i=0;i<n-1;i+=2)
  {
    if(s[i] == '0')
    {
        if(s[i+1] == '0')
        {
            cout<<"A";
        }
        else
        {
            cout<<"T";
        }
    }
    else
    {
        if(s[i+1] == '0')
        {
            cout<<"C";
        }
        else
        {
            cout<<"G";
        }
    }
  }

  cout<<'\n';
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}