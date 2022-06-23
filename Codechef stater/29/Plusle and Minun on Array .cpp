#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int* arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  
  int ans=0;
  vector<int>a,b;

  for(int i=0;i<n;i++)
  {
      if(i%2 == 0)
      {
          b.push_back(abs(arr[i]));
      }
      else
      {
          a.push_back(abs(arr[i]));
      }
  }

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  if(a[a.size() - 1] > b[0])
  {
      swap(a[a.size() - 1],b[0]);
  }

  for(int i=0;i<a.size();i++)
  {
      ans-=a[i];
  }     
  for(int i=0;i<b.size();i++)
  {
      ans+=b[i];
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