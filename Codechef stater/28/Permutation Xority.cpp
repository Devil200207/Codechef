#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  if(n == 2)
  {
      cout<<-1<<'\n';
      return;
  }
  if(n%2 != 0)
  {
      for(int i=n;i>0;i--)
      {
          cout<<i<<" ";
      }
      cout<<'\n';
      return;
  }

  int* arr = new int[n];
  int ans = 1;
  for(int i=0;i<n;i++)
  {
      arr[i] = ans;
      ans++;
      
  }

  arr[0] = 2;
  arr[1] = 3;
  arr[2] = 1;

  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }

  cout<<'\n';
 
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