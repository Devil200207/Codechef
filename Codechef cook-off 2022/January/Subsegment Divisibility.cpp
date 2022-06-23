#include <iostream>
using namespace std;

int ans[501];

bool ispossible(int i,int can)
{
    int len = 1,sum = can;
    for(int j=i-1;j>=0;j--)
    {
        sum+=ans[j];
        len++;
        if(sum%len == 0)
        {
            return false;
        }
    }
    return true;
}

void helper()
{
    ans[0] = 1;
    for(int i=1;i<=500;i++)
    {
        int can = ans[i-1];
        while(!ispossible(i,can))
        {
            can++;
            // ans[i] = can;
        }
        ans[i] = can;
    }
}
int main() {
	// your code goes here
	helper();
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
