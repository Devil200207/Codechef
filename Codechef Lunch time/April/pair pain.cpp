#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

int helper(int*arr,int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
} 
void solve()
{
  int n;
  cin>>n;

  int* arr  = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int ans = helper(arr,n,1);
  
  delete[]arr;
  if(ans == -1)
  {
      cout<<0<<'\n';
      return;
  }

  cout<<(n-1)-ans<<'\n';
 
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