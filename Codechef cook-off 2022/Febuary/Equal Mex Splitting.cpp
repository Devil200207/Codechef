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

  unordered_map<int,int>m;


  for(int i=0;i<n;i++)
  {
      m[arr[i]]++;
  }
   
   sort(arr,arr+n);
  int ans = 0;

if(arr[0] != 0)
{
    cout<<n<<'\n';
    return;
}
ans = m[0];
int ans1 = n- ans;
    ans = max(ans,ans1);
    
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