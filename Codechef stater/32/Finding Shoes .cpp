#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m,ans=0;
        cin>>n>>m;

        if(n > m)
        {
            ans = (n << 1) - m;
        }
        else
        {
            ans = n;
        }
    cout<<ans<<'\n';
 
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