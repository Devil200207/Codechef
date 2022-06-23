#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  int max1 = INT_MIN;

  int*arr = new int[n];
  cin>>arr[0];
  for(int i=1;i<n;i++)
  {
      cin>>arr[i];
      max1 = max(max1,(arr[i]+arr[i-1]));
  }

  int ans = arr[0]+arr[n-1];
  ans = max(ans,max1);
  cout<<ans<<'\n';
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