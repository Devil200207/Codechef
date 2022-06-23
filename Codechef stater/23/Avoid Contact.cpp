#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;

        if(y == 0)
        {
            cout<<x<<'\n';
            continue;
        }

        else if(x == y)
        {
            //int ans = 2*x -1;
            cout<<(x << 1) -1<<'\n';
        }
        else
        {
            int ans = (y << 1);
            ans+= (x-y);
            cout<<ans<<'\n';
        }
    }

    return 0;
}