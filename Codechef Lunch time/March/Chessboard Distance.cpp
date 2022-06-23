#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;

  int ans1 = abs(x1-x2);
  int ans2 = abs(y1-y2);

  int ans = max(ans1,ans2);
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