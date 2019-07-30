#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#define ull unsigned long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    for (int i=0;i<n;i++)
        if ( a[i] % 2 == 0 ) cout<<a[i]-1<<" ";
        else cout<<a[i]<<" ";
    return 0;
}
