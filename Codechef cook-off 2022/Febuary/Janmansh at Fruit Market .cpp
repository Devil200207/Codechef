#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int x,a,b,c;
  cin>>x>>a>>b>>c;

  int fmin = min(a,min(b,c));
  int smin;

  if(fmin == a)
  {
      smin = min(b,c);
  }
  else if(fmin == b)
  {
      smin = min(a,c);
  }
  else
  {
      smin = min(a,b);
  }

  int ans = (x-1)*fmin + smin;
  cout<<ans<<'\n';
 
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