#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <cmath>
#include <stdio.h>
#include <queue>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
 
ll n;
 
int main()
{
    cin>>n;
 
    vector <int> niz;
 
    ll d = n;
    while (d!=0)
    {
        niz.push_back(d%10);
        d/=10;
    }
 
    vector <int> a;
    for (int i=0;i<niz.size();i++)
        if ( i != niz.size()-1 )
        {
            a.push_back(9);
        }
        else
        {
            if ( niz[i] != 1 ) a.push_back(niz[i]-1);
        }
 
    ll suma = 0;
    ll br = 1;
    for (int i=0;i<a.size();i++)
    {
        suma+=(br*a[i]);
        br*=10;
    }
 
    d = n - suma;
 
    int rj = 0;
    while (d != 0)
    {
        rj+=(d%10);
        d/=10;
    }
    while (suma != 0)
    {
        rj+=(suma%10);
        suma/=10;
    }
 
    cout<<rj<<endl;
    return 0;
}
