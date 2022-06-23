#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
int t;
cin>>t;
 
while(t--)
{

  int n,x,y;
  cin>>n>>x>>y;

  int m = 100006;

  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=n;j++)
      {
          int k = 100*j + 4*i;

          (k >= n)? m = min(m,i*y+j*x):0;
      }
  }
  cout<<m<<'\n';
 
}

return 0;
}