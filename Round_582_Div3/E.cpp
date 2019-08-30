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
    int n;
    cin>>n;
 
    string a,b;
    cin>>a>>b;
 
    string t = "";
    if ( a == b && ( a == "aa" || a == "bb" || a == "cc" ) ){
        for (int i=0;i<n;i++){
            t+="a";
            t+="b";
            t+="c";
        }
        cout<<"YES"<<endl;
        cout<<t<<endl;
        return 0;
    }
    else if ( a == b ){
        char c1 = a[0];
        char c3 = a[1];
        char c2;
        for (int i=0;i<3;i++){
            if ( (char)(i+'a') != a[0] && (char)(i+'a') != a[1] ){
                c2 = (char)(i+'a');
            }
        }
        for (int i=0;i<n;i++){
            t+=c1;
        }
        for (int i=0;i<n;i++){
            t+=c2;
        }
        for (int i=0;i<n;i++){
            t+=c3;
        }
        cout<<"YES"<<endl;
        cout<<t<<endl;
        return 0;
    }
    else{
        string perm = "abc";
        do{
            string p = "";
            for (int i=0;i<n;i++) p+=perm;
            bool flag = true;
            for (int i=0;i<3*n-1;i++){
                if ( p[i] == a[0] && p[i+1] == a[1] ) flag = false;
                else if ( p[i] == b[0] && p[i+1] == b[1] ) flag = false;
                if ( !flag ) break;
            }
 
            if ( flag ){
                cout<<"YES"<<endl;
                cout<<p<<endl;
                return 0;
            }
 
            string uu = "";
            for (int i=0;i<n;i++){
                uu+=perm[0];
            }
            for (int i=0;i<n;i++){
                uu+=perm[1];
            }
            for (int i=0;i<n;i++){
                uu+=perm[2];
            }
            flag = true;
            for (int i=0;i<3*n-1;i++){
                if ( uu[i] == a[0] && uu[i+1] == a[1] ) flag = false;
                else if ( uu[i] == b[0] && uu[i+1] == b[1] ) flag = false;
                if ( !flag ) break;
            }
 
            if ( flag ){
                cout<<"YES"<<endl;
                cout<<uu<<endl;
                return 0;
            }
        }while (next_permutation(perm.begin(), perm.end()));
    }
 
    cout<<"NO"<<endl;
    return 0;
}
