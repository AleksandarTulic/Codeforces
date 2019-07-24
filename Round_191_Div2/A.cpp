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
    int n;
    cin>>n;
 
    int a[n];
    vector <int> dp(n+1, 0);
    vector <int> poz(n+1, 0);
    for (int i=0;i<n;i++) cin>>a[i];
    dp[0] = a[0] == 0 ? 1 : -1;
    poz[0] = 0;
    for (int i=1;i<n;i++)
    {
        int s = a[i] == 0 ? 1 : -1;
        if ( s > dp[i-1] + s )
        {
            dp[i] = s;
            poz[i] = i;
        }
        else
        {
            dp[i] = s + dp[i-1];
            poz[i] = poz[i-1];
        }
    }
 
    int maks = -2e9;
    int pom = -1;
    int pozz = -1;
    for (int i=0;i<n;i++)
        if ( dp[i] > maks ) { maks = dp[i]; pozz = poz[i]; pom = i; }
 
    for (int i=pozz;i<=pom;i++) a[i] = a[i] == 1 ? 0 : 1;
 
    int br = 0;
    for (int i=0;i<n;i++)
        if ( a[i] == 1 ) br++;
 
    cout<<br<<endl;
    return 0;
}
