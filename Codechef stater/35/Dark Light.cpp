#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(m == 1)
  {
     if(n%4 == 0)
      {
          cout<<"On"<<'\n';
      }
      else
      {
          cout<<"Ambiguous"<<'\n';
      }
      return;
  }
  else
  {
      if(n%4 == 0)
      {
          cout<<"Off"<<'\n';
      }
      else
      {
          cout<<"On"<<'\n';
      }
  }
 
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