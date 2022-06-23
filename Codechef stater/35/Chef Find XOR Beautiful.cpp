#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int even = 0,odd=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]%2 == 0)
      {
          even++;
      }
      else
      {
          odd++;
      }
  }

  int x;
  cin>>x;

  if(x%2 == 0)
  {
      cout<<n*n -1<<'\n';
  }
  else
  {
      int ans = min(n*n,even*even + odd*odd);
      cout<<ans<<'\n';
   }
  delete[]arr;

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