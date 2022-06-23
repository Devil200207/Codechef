#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
 void solve()
 {
     int n;
     cin>>n;
     string s;
     cin>>s;


     vector<vector<int>>v;
     for(int i=n-1;i>=0;i--)
     {
         if(s[i] == '0')
         {
             int ans = i+1;
             for(int j=0;j<=i;j++)
             {
                 if(s[j] == '1')
                 {
                     s[j] = '0';
                 }
                 else
                 {
                     s[j] = '1';
                 }
             }
             v.push_back({1ll,ans});
         }
     }
     int count = v.size();
     cout<<count<<'\n';

     for(auto fans:v)
     {
         cout<<fans[0]<<" "<<fans[1]<<'\n';
     }
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