#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#define ull unsigned long long
#define ll long long
#define mod 998244353
using namespace std;
 
int suma(int a)
{
    int s = 0;
    while (a){
        s+=(a%10);
        a/=10;
    }
 
    return s;
}
 
int main()
{
    int n;
    cin>>n;
 
    for (int i=n;;i++){
        if ( suma(i) % 4 == 0 ){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
