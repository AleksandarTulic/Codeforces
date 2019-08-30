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
 
int cmp(int a1, int b1){
    if ( m[a1] > m[b1] ) return 1;
    else return 0;
}
 
int cmp2(pair<int, int> a1, pair<int, int> b1){
    if ( a1.second < b1.second ) return 1;
    else return 0;
}
 
vector <vector <pair<int, int> > > graf(MAX_N);
 
int main() {
    cin>>n>>k;
 
    for (int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        if ( m[a[i]] == 1 ) b.push_back(a[i]);
        int d = a[i] / 2;
        int num = 1;
        while (d){
            graf[d].push_back({a[i], num});
            num++;
            d/=2;
        }
        graf[d].push_back({a[i], num});
    }
 
    for (int i=0;i<b.size();i++){
        if ( m[b[i]] >= k ){
            cout<<0<<endl;
            return 0;
        }
    }
 
    for (int i=0;i<n;i++){
        int d = a[i];
        while (d){
            d/=2;
            if ( m[d] == 0 ){
                b.push_back(d);
            }
        }
    }
 
    sort(b.begin(), b.end(), cmp);
 
    int res = 2e9;
    for (int i=0;i<b.size();i++){
        int form = k - m[b[i]];
        if ( graf[b[i]].size() < form ) continue;
        int r = 0;
        sort(graf[b[i]].begin(), graf[b[i]].end(), cmp2);
        for (int j=0;j<form;j++){
            r+=graf[b[i]][j].second;
        }
        res = min(res, r);
    }
 
    if ( res >= 1e9 ){
        res = 0;
        sort(graf[0].begin(), graf[0].end(), cmp2);
        for (int i=0;i<k;i++){
            res+=graf[0][i].second;
        }
 
        cout<<res<<endl;
    }else{
        cout<<res<<endl;
    }
    return 0;
}
