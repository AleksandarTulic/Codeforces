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
 
vector<vector<pair<int, int> > > adj; // adjacency list - vertex and edge pairs
vector<pair<int, int> > edges;
 
vector<int> tin, low;
int bridge_cnt;
string orient;
vector<bool> edge_used;
int n,m;
void find_bridges(int v) {
    static int time = 0;
    low[v] = tin[v] = time++;
    for (int i=0;i<adj[v].size();i++) {
        pair <int, int> p = adj[v][i];
        if (edge_used[p.second]) continue;
        edge_used[p.second] = true;
        orient[p.second] = v == edges[p.second].first ? '>' : '<';
        int nv = p.first;
        if (tin[nv] == -1) {
            find_bridges(nv);
            low[v] = min(low[v], low[nv]);
            if (low[nv] > tin[v]) {
                bridge_cnt++;
            }
        } else {
            low[v] = min(low[v], low[nv]);
        }
    }
}
 
int main() {
    cin>>n>>m;
    adj.resize(n);
    tin.resize(n, -1);
    low.resize(n, -1);
    orient.resize(m);
    edges.resize(m);
    edge_used.resize(m);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin>>a>>b;
        a--; b--;
        adj[a].push_back({b, i});
        adj[b].push_back({a, i});
        edges[i] = {a, b};
    }
    int comp_cnt = 0;
    for (int v = 0; v < n; v++) {
        if (tin[v] == -1) {
            comp_cnt++;
            find_bridges(v);
        }
    }
 
    if ( bridge_cnt >= 1 ){
        cout<<0<<endl;
        return 0;
    }
 
    for (int i=0;i<m;i++){
        if ( orient[i] == '>' ){
            cout<<edges[i].first+1<<" "<<edges[i].second+1<<endl;
        }
        else{
            cout<<edges[i].second+1<<" "<<edges[i].first+1<<endl;
        }
    }
}
