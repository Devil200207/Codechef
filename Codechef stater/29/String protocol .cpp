#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;

  int i=0,count=0;
  while(i<n)
  {
      if(s[i] == s[i+1])
      {
          i++;
      }
      count++;
      i++;
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