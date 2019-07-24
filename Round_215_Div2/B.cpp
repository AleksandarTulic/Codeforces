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
    int n,m;
    cin>>n>>m;
 
    int x[n];
    for (int i=0;i<n;i++) cin>>x[i];
 
    map <int, bool> flag;
 
    vector <int> dp(n+1, 0);
    dp[n-1] = 1;
    flag[x[n-1]] = true;
    for (int i=n-2;i>=0;i--)
    {
        if ( !flag[x[i]] ) dp[i]++;
        dp[i]+=dp[i+1];
        flag[x[i]] = true;
    }
 
    while (m--)
    {
        int q;
        cin>>q;
        cout<<dp[q-1]<<endl;
    }
    return 0;
}
