#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,k;
  cin>>n>>k;

  int ans = 1;
  int n1 = n;

  while(n1--)
  {
    ans = ans*4;
  }
  ans-= ((1 << n)-1)*3;
  cout<<ans-1<<'\n';
 
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