#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
#define ull unsigned long long
using namespace std;
 
int main()
{
    int l = -1e9;
    int r = 1e9;
 
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    string g;
    cin>>g;
 
    for (int i=4;i<n;i++){
        if ( g[i] != g[i-1] ){
            if ( g[i] == '0' ){
                r = min(r, a[i] - 1);
                r = min(r, a[i-1] - 1);
                r = min(r, a[i-2] - 1);
                r = min(r, a[i-3] - 1);
                r = min(r, a[i-4] - 1);
            }
            else{
                l = max(l, a[i] + 1);
                l = max(l, a[i-1] + 1);
                l = max(l, a[i-2] + 1);
                l = max(l, a[i-3] + 1);
                l = max(l, a[i-4] + 1);
            }
        }
    }
 
    cout<<l<<" "<<r<<endl;
    return 0;
}
