#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  for(int i=1;i<=n/2;i++)
  {
      cout<<m-i<<" ";
  }

  if(n%2 == 1)
  {
      cout<<m<<" ";
  }

  for(int i=1;i<=n/2;i++)
  {
      cout<<m+i<<" ";
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