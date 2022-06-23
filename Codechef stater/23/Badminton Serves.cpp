#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll count = 1;
        ll n;
        cin>>n;

        count+= (n >> 1);
        cout<<count<<'\n';
    }

    return 0;
}