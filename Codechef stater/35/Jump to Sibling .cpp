#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      arr[i]%=2;
  }
  vector<int>even(n+1,0),odd(n+1,0);

  for(int i=0;i<n;i++)
  {
      odd[i+1] = odd[i] + arr[i];
      even[i+1] = i+1 - odd[i+1];
  }

  int ans = INT_MAX;
  if(arr[0] == arr[n-1])
  {
      if(arr[0] == 0)
      {
         ans =  even[n] - 1;
      }
      else
      {
          ans = odd[n] - 1;
      }
  }
  else
  {
      for(int i=0;i<n;i++)
      {
          if(arr[0] == arr[i])
          {
              if(arr[0] == 0)
              {
                  ans = min(ans,even[i] + odd[n] - odd[i+1]);
              }
              else
              {
                  ans = min(ans,odd[i] + even[n] - even[i+1]);
              }
          }
      }
  }

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