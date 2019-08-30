#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>
#include <fstream>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
 
ll gcd(ll a, ll b){
    return a == 0 ? b : gcd(b%a, a);
}
 
int main()
{
    ull n,k;
    cin>>n>>k;
 
    if ( k == 1 ){
        cout<<n<<endl;
        return 0;
    }
 
    ull ans = 1;
    while ( ans < n ){
        ans<<=1;
        ans++;
    }
 
    cout<<ans<<endl;
    return 0;
}
