#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  int count=0;
  
  while(n--)
  {
      int a;
      cin>>a;

      if(a >= 10 && a <= 60)
      {
          count++;
      }
  }

  cout<<count<<'\n';
 
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