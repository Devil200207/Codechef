#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
// void solve()
// {
//   int x1,x2,y1,y2;
//   cin>>x1>>y1>>x2>>y2;

//   int ans1 = abs(x1-x2);
//   int ans = abs(y1-y2);

//   if(ans1 == 0)
//   {
//     if(ans%2 == 0)
//     {
//         cout<<"YES"<<'\n';
//     }
//     else
//     {
//         cout<<"NO"<<'\n';
//     }
//   }
//   else if(ans1%2 != 0)
//   {
//     if(ans == 0 || ans > 1)
//     {
//         cout<<"YES"<<'\n';
//     }
//     else
//     {
//         cout<<"NO"<<'\n';
//     }
//   }

//   else
//   {
//     if(ans > 2)
//     {
//         cout<<"YES"<<'\n';
//     }
//     else
//     {
//         cout<<"NO"<<'\n';
//     }
//   }
// }

void solve()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    int ans1 = abs(x1-x2);
    int ans = abs(y1-y2);

    if(x1 == x2)
    {
        if(ans%2 == 0)
        {
           cout<<"YES"<<'\n';
        }
        else
        {
           cout<<"NO"<<'\n';
        }
    }

    else if(x1 > x2)
    {
        if(y1 == y2)
        {
            for(int i=1;i<=ans1;i++)
            {
                
            }
        }
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