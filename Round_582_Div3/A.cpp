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
 
int n;
int a[101];
map <int, bool> f;
vector <int> k;
 
void solve(){
    int res = 1e9;
    for (int i=0;i<k.size();i++){
        int b = 0;
        for (int j=0;j<n;j++){
            b+=(abs(k[i]-a[j])%2);
        }
        res = min(res, b);
    }
 
    cout<<res<<endl;
}
 
int main() {
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if ( !f[a[i]] ){
            k.push_back(a[i]);
            f[a[i]] = true;
        }
    }
 
    solve();
    return 0;
}
