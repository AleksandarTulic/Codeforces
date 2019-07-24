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
 
    vector <int> dp(100001, 0);
    int x;
    map <int, bool> flag;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        dp[x]++;
        flag[x] = true;
    }
 
    for (int i=1;i<=100000;i++) dp[i]+=dp[i-1];
 
    int q;
    cin>>q;
    while (q--)
    {
        int money;
        cin>>money;
 
        if ( money <= 100001 ) cout<<dp[money]<<endl;
        else cout<<n<<endl;
    }
    return 0;
}
