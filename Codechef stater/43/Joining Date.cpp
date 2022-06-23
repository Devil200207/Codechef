#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n < 5)
  {
    cout<<0<<'\n';
    return;
  }

  int dif = n-m;
  if(dif == 0)
  {
    cout<<0<<'\n';
  }
  else if(dif < 5)
  {
    cout<<5-dif<<'\n';
  }
  else
  {
    cout<<(n/5 - m/5)<<'\n';
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