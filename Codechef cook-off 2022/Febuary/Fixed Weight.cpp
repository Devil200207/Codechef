#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,x;
  cin>>n>>x;
  
  bool ans = false;
  for(int i=1;i<=n;i++)
  {
    if((x%i == 0) && (x/i <= n-i+1))
    {
      ans= true;
      break;
    }
  }
  
  if(ans)
  {
    cout<<"YES"<<'\n';
  }
  else
  {
    cout<<"NO"<<'\n';
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