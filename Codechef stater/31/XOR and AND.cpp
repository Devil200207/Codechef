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

int* arr2 = new int[40]();

for(int i=0; i<n; i++)
{
    int c=0;
    
    while(arr[i]>=2)
    {
        c++;
        arr[i]/=2;
    }
    arr2[c]++;
}

//int sum=0;
for(int i=0;i<40;i++)
{
    ans+= (arr2[i]*(arr2[i]-1)/2);
}
 cout<<ans<<'\n';
 delete[]arr;
 delete[]arr2;
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