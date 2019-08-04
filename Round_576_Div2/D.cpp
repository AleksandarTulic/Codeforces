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
    int n;
    cin>>n;

    int a[n];
    int b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[i] = -1;
    }

    int q;
    cin>>q;

    int br = 0;
    vector <pair<int, int> > niz;

    while (q--){
        int op;
        cin>>op;

        if ( op == 1 ){
            int p;
            cin>>p;
            int x;
            cin>>x;
            niz.push_back({p-1, x});
        }
        else{
            int x;
            cin>>x;
            niz.push_back({-1, x});
        }
    }

    int maks = -1;
    for (int i=niz.size()-1;i>=0;i--){
        if ( niz[i].first == -1 ){
            maks = max(niz[i].second, maks);
        }
        else{
            if ( b[niz[i].first] == -1 ){
                b[niz[i].first] = max(maks, niz[i].second);
            }
        }
    }

    for (int i=0;i<n;i++){
        if ( b[i] == -1 ){
            cout<<max(a[i], maks)<<" ";
        }
        else{
            cout<<b[i]<<" ";
        }
    }
    return 0;
}
