#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n, m;
    cin >> n >> m;

   int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        b *= 2;

        int* arr1 = new int[b];
        for (int i = 0; i < b; i++)
            cin >> arr1[i];
        for (int i = 0; i < b - 1; i += 2)
        {
            arr[arr1[i + 1] - 1] = (arr[arr1[i + 1] - 1] + (arr[a - 1] * arr1[i])) % mod;
        }
        arr[a - 1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
//  int t;
//  cin>>t;
 
//while(t--)
solve();
 
return 0;
}