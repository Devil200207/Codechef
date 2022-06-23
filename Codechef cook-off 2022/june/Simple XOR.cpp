#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n%2 != 0)
  {
      if(m == (n+3))
      {
          cout<<-1<<'\n';
      }
      else
      {
          cout<<n+1<<" "<<n+2<<" "<<n+3<<" "<<n+4<<'\n';
      }
  }
  else
  {
      cout<<n<<" "<<n+1<<" "<<n+2<<" "<<n+3<<'\n';
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