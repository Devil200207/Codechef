#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
vector<int>arr;
void solve()
{
  

//   int*arr = new int[n]();
//   arr[0] = x;
//   int sum = x;

//   for(int i=1;i<n;i++)
//   {
//     int y = arr[i-1];
//     sum = (sum%mod + y%mod)%mod;
//     arr[i] = (sum)%mod;
//   }

//   cout<<arr[n-1]<<'\n';
//   delete[]arr;
arr.push_back(1);

    for(int i=0;i<1000010;i++)
    {
        int ans = arr[arr.size()-1]*2;
        ans%=mod;
        arr.push_back(ans);
    }  
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 solve();

while(t--)
{
    int n,x;
   cin>>n>>x;

   int ans = (arr[n-1]*x)%mod;
   cout<<ans<<'\n';
}

 
return 0;
}