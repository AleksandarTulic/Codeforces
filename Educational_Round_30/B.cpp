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
 
    string g;
    cin>>g;
    int a[n];
    for (int i=0;i<n;i++) a[i] = g[i] - '0';
 
    vector <int> dp1(n+1, 0);
    vector <int> dp2(n+1, 0);
 
    dp1[0] = a[0];
    dp2[0] = (a[0]==0);
 
    int br = 0;
    for (int i=1;i<n;i++)
    {
        if ( a[i] == 1 ) dp1[i]++;
        else dp2[i]++;
        dp1[i]+=dp1[i-1];
        dp2[i]+=dp2[i-1];
    }
 
    map <int, int> m;
 
    for (int i=1;i<=n;i++)
        m[dp1[i-1]-dp2[i-1]] = i;
 
    int maks = -2e9;
    for (int i=1;i<=n;i++) maks = max(maks, m[dp1[i-1]-dp2[i-1]] - i);
    maks = max(maks, m[0]);
 
    cout<<maks<<endl;
    return 0;
}
