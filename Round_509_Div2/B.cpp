#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
#include <time.h>
#define ull unsigned long long
using namespace std;
 
ull gcd(ull a, ull b){
    if ( a == 0 ) return b;
 
    return gcd(b%a, a);
}
 
int main()
{
    ull x, y, a, b;
    cin>>a>>b>>x>>y;
 
    ull com = gcd(x, y);
    x/=com;
    y/=com;
 
    cout<<min(a/x, b/y);
    return 0;
}
