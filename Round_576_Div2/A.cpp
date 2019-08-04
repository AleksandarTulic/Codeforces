#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#include <queue>
#define ull unsigned long long
#define ll long long
#define mod 998244353
using namespace std;
 
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    int rez = 0;
 
    for (int i=0;i<n;i++){
        bool flag = false;
        for (int j=i-1;j>=max(i-x, 0);j--){
            if ( a[i] > a[j] ){
                flag = true;
                break;
            }
        }
 
        if ( flag ) continue;
 
        for (int j=i+1;j<=min(i+y, n-1);j++){
            if ( a[i] > a[j] ){
                flag = true;
                break;
            }
        }
 
        if ( !flag ){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
