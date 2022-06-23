#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,a,b;
        cin>>x>>a>>b;

        int ans = (x*b);

        if(ans%a !=0)
        {
            cout<<-1<<'\n';
        }
        else
        {
            ans = ans/a;
            cout<<ans<<'\n';
        }
        
    }

    return 0;
}