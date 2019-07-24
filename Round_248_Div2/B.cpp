#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int main()
{
    int n;
    cin>>n;
 
    ll a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    vector <ll> dp1(n+1, 0), dp2(n+1, 0);
 
    dp1[0] = a[0];
    for (int i=1;i<n;i++) dp1[i]=a[i]+dp1[i-1];
 
    sort(a,a+n);
    dp2[0] = a[0];
    for (int i=1;i<n;i++) dp2[i]=a[i]+dp2[i-1];
 
    int q;
    cin>>q;
 
    while (q--)
    {
        int l, r, type;
        cin>>type>>l>>r;
 
        if ( type == 1 )
            if ( l == 1 ) cout<<dp1[r-1]<<endl;
            else cout<<dp1[r-1] - dp1[l-2]<<endl;
        else
            if ( l == 1 ) cout<<dp2[r-1]<<endl;
            else cout<<dp2[r-1] - dp2[l-2]<<endl;
    }
    return 0;
}
