#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int n1 = n;

  int count = 0;

  while(n--)
  {
      int a;
      cin>>a;

      if(a == 6 || a==7||a==13||a==14||a==20||a==21||a==27||a==28)
      {
          count++;
      }
  }

  int ans = 8+(n1-count);
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