#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,k;
  cin>>n>>k;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);

  if(k >= n)
  {
      cout<<arr[n-1];
  }
  else
  {
      cout<<arr[k];
  }
  cout<<'\n';
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