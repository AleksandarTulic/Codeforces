#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#define ull unsigned long long
using namespace std;
 
int n;
ull a[101];
map <ull, pair<ull, ull> > m;
map <ull, bool> flag;
vector <ull> h;
 
ull no_repeat()
{
    for (int i=0;i<n;i++)
    {
        bool ff = true;
        for (int j=0;j<h.size();j++)
        {
            if ( h[j] == a[i] )
            {
                ff = false;
                break;
            }
        }
 
        if ( ff ) return a[i];
    }
 
    return 0;
}
 
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        flag[a[i]] = true;
    }
 
    for (int i=0;i<n;i++)
    {
        ull d1 = 0, d2 = 0;
        d1 = a[i] * 2;
        if ( !flag[d1] ) d1 = 0;
        d2 = a[i] / 3;
        if ( a[i] % 3 != 0 || !flag[a[i]/3] ) d2 = 0;
        if ( d1 != 0 ) h.push_back(d1);
        if ( d2 != 0 ) h.push_back(d2);
 
        m[a[i]] = {d1, d2};
    }
 
    vector <ull> niz;
 
    ull broj = no_repeat();
 
    while (broj != 0)
    {
        niz.push_back(broj);
        if ( m[broj].first != 0 ) broj = m[broj].first;
        else broj = m[broj].second;
    }
 
    for (int i=0;i<niz.size();i++) cout<<niz[i]<<" ";
    return 0;
}
