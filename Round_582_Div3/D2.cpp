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
 
const int MAX_N = 2e5+5;
 
int n,k;
int a[MAX_N];
map <int, int> m;
vector <int> b;
 
vector <vector <int> > graf(MAX_N);
 
int cmp(int a1, int b1){
    if ( a1 < b1 ) return 1;
    else return 0;
}
 
int main() {
    cin>>n>>k;
 
    for (int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        if ( m[a[i]] == 1 ) b.push_back(a[i]);
    }
 
    for (int i=0;i<b.size();i++){
        if ( m[b[i]] >= k ){
            cout<<0<<endl;
            return 0;
        }
    }
 
    for (int i=0;i<n;i++){
        int d = a[i];
        int num = 0;
        while ( d ){
            graf[d].push_back(num);
            d/=2;
            num++;
        }
    }
 
    int res = 2e9;
    for (int i=0;i<=2e5;i++){
        if ( graf[i].size() >= k ){
            sort(graf[i].begin(), graf[i].end(), cmp);
            int s = 0;
            for (int j=0;j<k;j++) s+=graf[i][j];
            res = min(res, s);
        }
    }
 
    cout<<res<<endl;
    return 0;
}
