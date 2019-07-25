#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#define ull unsigned long long
#define ll long long
using namespace std;
 
int n,m;
ll a[200005];
ll b[200005];
 
int main()
{
    cin>>n>>m;
 
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
 
    vector <ll> dp(n+1);
    dp[0] = 0;
    dp[1] = a[0];
    for (int i=2;i<=n;i++) dp[i]+=dp[i-1]+a[i-1];
 
    queue <ll> q;
    for (int i=0;i<m;i++) q.push(b[i]);
 
    int i = 0;
    while (i<=n && !q.empty())
    {
        if ( q.front() >= dp[i] && q.front() <= dp[i+1] )
        {
            if ( i == 0 ) cout<<i+1<<" "<<q.front()<<endl;
            else cout<<i+1<<" "<<a[i]-(dp[i+1]-q.front())<<endl;
            q.pop();
        }
        else i++;
    }
    return 0;
}
