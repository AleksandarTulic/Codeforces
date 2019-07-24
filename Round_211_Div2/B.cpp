#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    int h[n];
    for (int i=0;i<n;i++) cin>>h[i];
 
    vector <int> dp(n+1, 0);dp[0] = h[0];
    for (int i=1;i<n;i++) dp[i]+=dp[i-1]+h[i];
 
    int minn = 2e9;
    int poz = -1;
    for (int i=0;i<=n-k;i++)
    {
        int s = 0;
        if ( i == 0 ) s = dp[i+k-1];
        else s=dp[i+k-1]-dp[i-1];
 
        if ( minn > s )
        {
            minn = s;
            poz = i;
        }
    }
 
    cout<<poz+1<<endl;
    return 0;
}
