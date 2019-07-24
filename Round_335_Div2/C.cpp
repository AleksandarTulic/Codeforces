#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
 
using namespace std;
 
int solve_sort(int n, int a[])
{
    vector <int> niz(n+1,0);
    int maks = 0;
 
    for (int i=0;i<n;i++)
    {
        niz[a[i]] = niz[a[i]-1] + 1;
        maks = max(maks, niz[a[i]]);
    }
 
    return maks;
}
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    cout<<n-solve_sort(n, a)<<endl;
    return 0;
}
