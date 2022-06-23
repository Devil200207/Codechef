#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

//   if(m == 0)
//   {
//       int ans = 1-n;
//       ans = (ans << 1);
//       cout<<ans<<'\n';
//   }

  int** output = new int*[n];
  for(int i=0;i<n;i++)
  {
      output[i] = new int[n];
      for(int j=0;j<n;j++)
      {
          output[i][j] = 0;
      }
  }

  for(int i=0;i<m;i++)
  {
      int a,b;
      cin>>a>>b;
      output[a-1][b-1] = 1;
      output[b-1][a-1] = 1;
  }

  

  else
  {

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