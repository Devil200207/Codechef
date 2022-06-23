#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int* arr = new int[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      sum+= arr[i];
  }

  int ans = sum,pres=0;

  for(int i=0;i<n;i++)
  {
    pres+= arr[i];
    int remt = sum-pres;
    int rect = max(remt,pres);
    ans = min(ans,rect);     
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