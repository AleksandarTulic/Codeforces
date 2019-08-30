#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>
 
using namespace std;
 
int gcd(int a, int b){
    if ( a == 0 ) return b;
 
    return gcd(b%a, a);
}
 
int main()
{
    int n;
    cin>>n;
 
    int ans;
    cin>>ans;
    for (int i=1;i<n;i++){
        int a;
        cin>>a;
        ans = gcd(a, ans);
    }
 
    cout<<n*ans<<endl;
    return 0;
}
