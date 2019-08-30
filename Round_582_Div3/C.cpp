#include <iostream>
#include <stdio.h>
#include <map>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
#define ff first
#define ss second
#define mod 1e9+7
ll gcd(ll a, ll b){ if ( a == 0 ) return b; return gcd(b%a, a); }
void tf(int b){ b == 1 ? cout<<"NO"<<endl : cout<<"YES"<<endl; }
 
int main() {
    int tests;
    cin>>tests;
    while ( tests-- ){
        ll a,b;
        cin>>a>>b;
 
        ll t = a / b;
        map <int, bool> flag;
        flag[b%10] = true;
        vector <ll> cif;
        cif.push_back(b%10);
        for (long long i=2*b;1;i+=b){
            if ( flag[i%10] ) break;
 
            cif.push_back(i%10);
            flag[i%10] = true;
        }
 
        ll suma = 0;
        for (int i=0;i<cif.size();i++) suma+=cif[i];
 
        //cout<<cif.size()<<endl;
 
        ll how = t / cif.size();
        how *= suma;
 
        if ( t % cif.size() == 0 ){
            cout<<how<<endl;
        }else{
            for (int i=0;i<t%cif.size();i++){
                how+=cif[i];
            }
            cout<<how<<endl;
        }
 
    }
    return 0;
}
