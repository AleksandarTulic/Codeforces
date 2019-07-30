#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#define ull unsigned long long
#define ll long long
#define mod 998244353
using namespace std;
 
int main()
{
    int q;
    cin>>q;
 
    while (q--){
        int n;
        cin>>n;
 
        int k;
        cin>>k;
 
        int maks = -2e9;
        int minn = 2e9;
        int a;
 
        for (int i=0;i<n;i++){
            cin>>a;
 
            maks = max(maks, a);
            minn = min(minn, a);
        }
 
        if ( abs(minn + k - maks) <= k ) cout<<minn+k<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
