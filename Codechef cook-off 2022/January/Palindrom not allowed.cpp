// Logic was simple hame bus ye dek na tha ki palindrom kam se kam 2 ya 3 length ka hoga (minimum) to bus har 3 number ke bad chareter change kr do 
//minimum 3 rak ne padinge nahi to ababa palindrom bana sakta h 

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s = "";
        char ch = 'a';

        for(int i=0;i<n;i++)
        {
            s = s + ch;
            ch++;

            if(ch == 'd')
            {
                ch = 'a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}