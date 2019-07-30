#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#define ull unsigned long long
#define ll long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    ll d[n];
    for (int i=0;i<n;i++) cin>>d[i];
 
    vector <ll> dp(n+1, 0);dp[0] = d[0];
 
    map <ll, ll> m;
    map <ll, bool> flag;
    m[dp[0]] = 0;
    flag[dp[0]] = true;
 
    for (int i=1;i<n;i++)
    {
        dp[i]+=dp[i-1]+d[i];
        m[dp[i]] = i;
        flag[dp[i]] = true;
    }
 
    ll suma = 0;
    ll rez = -1;
    for (int i=n-1;i>=0;i--)
    {
        suma+=d[i];
        if ( flag[suma] )
        {
            if ( i > m[suma] )
            {
                rez = suma;
            }
        }
    }
 
    if ( rez == -1 ) cout<<0<<endl;
    else cout<<rez<<endl;
    return 0;
}
