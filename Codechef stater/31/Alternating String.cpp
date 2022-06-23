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

  unordered_map<char,int>m;
  for(int i=0;i<n;i++)
  {
      m[s[i]]++;
  }

  if(m['0'] == 0 || m['1'] == 0)
  {
      cout<<1;
  }
  else if(m['0'] == m['1'])
  {
      cout<<m['0'] + m['1'];
  }
  else
  {
      if(m['0'] < m['1'])
      {
          int ans = m['0'];
          ans*=2;
          ans+=1;
          cout<<ans;
      }
      else
      {
          int ans = m['1'];
          ans*=2;
          ans+=1;
          cout<<ans;
      }
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