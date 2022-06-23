#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;
  
  int ans = 0;
  if(n%2 == 0 && m<=n/2)
  {
    for(int i=0;i<=n/2;i++)
    {
      if(ans == m/2)
      {
        ans=0;
      }
        cout<<char(97+ans);
        ans++;
    }
    for(int i=n/2-1;i>=0;i--)
    {
      if(ans == m)
      {
        ans=0;
      }
        cout<<char(97+ans);
        ans++;
    }    
  }

  else if(n%2 != 0 && m<=(n/2)+1)
  {
    for(int i=0;i<=n/2;i++)
    {
        cout<<char(97);
    }
    for(int i=n/2-1;i>=0;i--)
    {
        cout<<char(97);
    }
  }
  else
  {
    cout<<-1;
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