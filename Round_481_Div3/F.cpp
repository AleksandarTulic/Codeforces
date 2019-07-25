#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n,k;
pair<int, int> r[200005];
int rr[200005];
int tree[200005];
map <int, int> m;
 
void update(int x, int v)
{
    for (;x<=n;x+=x&-x) tree[x]+=v;
}
 
int query(int x)
{
    int br = 0;
    for (;x>0;x-=x&-x) br+=tree[x];
    return br;
}
 
int main()
{
    cin>>n>>k;
 
    for (int i=0;i<n;i++){
        cin>>r[i].first;
        r[i].second = i;
    }
 
    sort(r,r+n);
    int br = 1;
    for (int i=0;i<n;i++){
        rr[r[i].second] = br;
 
        if ( i != n-1 && r[i].first != r[i+1].first ) br++;
    }
 
    map <int, int> pon;
 
    for (int i=0;i<n;i++){
        update(rr[i], 1);
        pon[rr[i]]++;
    }
 
    for (int i=0;i<k;i++){
        int x, y;
        cin>>x>>y;
 
        if ( rr[x-1] > rr[y-1] ) m[x-1]++;
        else if ( rr[x-1] < rr[y-1] ) m[y-1]++;
    }
 
    for (int i=0;i<n;i++){
        cout<<query(rr[i]) - m[i] - pon[rr[i]]<<" ";
    }
    return 0;
}
