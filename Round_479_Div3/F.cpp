#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    map <int, vector <int> > poz;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        poz[a[i]].push_back(i+1);
    }
 
    map <int, int> m;
 
    int e = 1;
    int s = 0;
 
    m[a[0]] = 1;
 
    for (int i=1;i<n;i++)
    {
        m[a[i]] = m[a[i] - 1] + 1;
        if ( e < m[a[i]] )
        {
            e = m[a[i]];
            s = a[i];
        }
    }
 
    cout<<e<<endl;
    if ( e == 1 ) { cout<<1<<endl; return 0; }
 
    vector <int> ind;
    int zad = 0;
    for (int i=s-e+1;i<=s;i++)
    {
        for (int j=0;j<poz[i].size();j++)
        {
            if ( poz[i][j] > zad )
            {
                zad = poz[i][j];
                break;
            }
        }
 
        ind.push_back(zad);
    }
 
    for (int i=0;i<ind.size();i++) cout<<ind[i]<<" ";
    return 0;
}
