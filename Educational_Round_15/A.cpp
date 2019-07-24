#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    vector <int> dp(n+1, 0);
    dp[0] = 1;
 
    for (int i=1;i<n;i++)
    {
        if ( a[i] > a[i-1] ) dp[i]+=dp[i-1]+1;
        else
        {
            dp[i] = 1;
        }
    }
 
    sort(dp.begin(), dp.end());
    cout<<dp[dp.size()-1]<<endl;
    return 0;
}
