#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  float x1,x2,y1,y2;
  cin>>x1>>x2>>y1>>y2;

  float ans1 = y1/x1;
  float ans2 = y2/x2;

  if(ans1 > ans2)
  {
      cout<<"1";
  }
  else if(ans1 < ans2)
  {
      cout<<"-1";
  }
  else
  {
      cout<<"0";
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