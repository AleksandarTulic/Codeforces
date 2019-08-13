#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#include <queue>
#define ull unsigned long long
#define ll long long
#define mod 1000000007
using namespace std;
 
ll gcd(ll a, ll b){
    if ( a == 0 ) return b;
 
    return gcd(b%a, a);
}
 
int main()
{
    int n;
    cin>>n;
 
    ll a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    ll broj = a[0];
    for (int i=1;i<n;i++){
        broj = gcd(broj, a[i]);
    }
 
    ll rez = 0;
    ll i = 1;
    for (i=1;i*i<broj;i++){
        if ( broj % i == 0 ){
            rez+=2;
        }
    }
 
    if ( i * i == broj ) cout<<rez+1<<endl;
    else cout<<rez<<endl;
    return 0;
}
