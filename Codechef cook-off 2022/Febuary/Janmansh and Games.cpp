#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int x,y;
  cin>>x>>y;

  if((x%2 == 0 && y%2 == 0) || (x%2 !=0 && y%2 != 0))
  {
      cout<<"Janmansh"<<'\n';
  }
  else
  {
      cout<<"Jay"<<'\n';
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