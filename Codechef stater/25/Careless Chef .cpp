#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
int t;
cin>>t;
 
while(t--)
{

  int n;
  cin>>n;

  int* arr = new int[2*n];
  int sum = 0;
  for(int i=0;i<2*n;i++)
  {
      cin>>arr[i];
      sum+=arr[i];
  }

  if(sum%2 == 0)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
  }

 
  delete[]arr;
 
}

return 0;
}