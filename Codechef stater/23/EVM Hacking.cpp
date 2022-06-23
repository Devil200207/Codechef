#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;

        double total_need = ((p+q+r) >> 1);

        if((a+b+r) > total_need)
        {
            cout<<"YES";
        }
        else if((a+c+q) > total_need)
        {
            cout<<"YES";
        }
        else if((p+b+c) > total_need)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<'\n';
    }

    return 0;
}