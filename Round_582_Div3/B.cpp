#include <iostream>
#include <stdio.h>
#include <map>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
#define ff first
#define ss second
#define mod 1e9+7
ll gcd(ll a, ll b){ if ( a == 0 ) return b; return gcd(b%a, a); }
void tf(int b){ b == 1 ? cout<<"NO"<<endl : cout<<"YES"<<endl; }
 
int main() {
    int tests;
    cin>>tests;
    while ( tests-- ){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
 
        int minn = a[n-1];
        int cnt = 0;
        for (int i=n-2;i>=0;i--){
            if ( minn < a[i] ) cnt++;
            minn = min(minn , a[i]);
        }
 
        cout<<cnt<<endl;
    }
    return 0;
}
