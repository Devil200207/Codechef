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

  int*arr = new int[n]();
  int*arr1 = new int[n]();

  for(int i=0;i<n;i++)
  {
    if(i > 0)
    {
        arr[i]+=arr[i-1];
    }

    if(s[i] == '(')
    {
        arr[i]++;
    }
  }

  int ans = n+1;
  for(int i=n-1;i>=0;i--)
  {
    if(i < n-1)
    {
        arr1[i]+= arr[i+1];
    }

    if(s[i] == ')')
    {
        arr1[i]++;
    }

    // int ans1 = min(arr[i],arr1[i]);
    ans = min(ans,n-2*min(arr[i],arr1[i]));
  }

  cout<<ans<<'\n';
  delete[]arr;
  delete[]arr1;
 
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