#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
 
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    int br = 0;
 
    for (int i=0;i<n;i++)
    {
        if ( a[i] > k ) break;
 
        a[i]=1000009;
        br++;
    }
 
    for (int i=n-1;i>=0;i--)
    {
        if ( a[i] > k ) break;
 
        br++;
    }
 
    cout<<br<<endl;
    return 0;
}
