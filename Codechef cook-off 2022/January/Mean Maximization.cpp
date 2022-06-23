//logic was very simple just 2 subset bane the or unka to avg sum h wo maximum chayie tha to simple ek elemnt lo mx jo ki maximum h pure array m
//then 2ed subset bana lo kism baki ke elemnt ho and unka sum and avg lelo usm ist wale ka avg jo ki mx he hoga add kr lo answer ajega
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        int* arr = new int[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int mx = *max_element(arr,arr+n);

        double ans = (sum - mx)/(n-1);
        ans+= mx;

        cout<<fixed<<setprecision(10)<<ans<<endl;

        delete[]arr;
    }
    return 0;
}