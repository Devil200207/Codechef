#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
 int arr1[100000];
 void solve1()
 {
     int n=1;
     arr1[0] = 0;
     arr1[1] = 0;
     for(int i=2;i<100000;i++)
     {
         arr1[i] = n;
         n = (i) + arr1[i];
     }
 }

void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int pcount=0,ncount=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i] > 0)
      {
          pcount++;
      }
      else if(arr[i] < 0)
      {
          ncount++;
      }
  }
  
  int ans = arr1[pcount] + arr1[ncount];

  cout<<ans<<'\n';
  delete[]arr;
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 solve1();
 
while(t--)
solve();
 
return 0;
}