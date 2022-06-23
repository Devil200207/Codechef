#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  
  int* arr = new int[n];
  int ans = (n << 1);

  for(int i=n-1;i>=0;i--)
  {
      if(i%2 != 0)
      {
          arr[i] = ans; 
      }
      else
      {
          arr[i] = ans/2;
          ans-=2;
      }
  } 

  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
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