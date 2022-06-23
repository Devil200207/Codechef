#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
int helper(int a,int b)
{
    if(a%b == 0)
    {
        return (a/b);
    }
    else
    {
        return (a/b) + 1;
    }
}
void solve()
{
  int n,x;
  cin>>n>>x;

  int*arr = new int[n];
  int min1 = INT_MAX;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i] < min1)
      {
          min1 = arr[i];
      }
  }

  int ans = helper(x,min1);
  cout<<max(ans,n)<<'\n';


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