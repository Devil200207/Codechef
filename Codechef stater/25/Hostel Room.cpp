#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
int t;
cin>>t;
 
while(t--)
{

  int n,x;
  cin>>n>>x;

  int ans = x;
  int fans = ans;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;

      fans+=a;

      ans = max(ans,fans);
      
  }

  cout<<ans<<'\n';
 
}

return 0;
}