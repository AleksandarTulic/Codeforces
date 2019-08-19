#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
#define ull unsigned long long
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    string s;
    cin>>s;
 
    vector <char> a;
    map <char, bool> flag;
    map <char, char> next;
    for (int i=0;i<s.size();i++){
        if ( !flag[s[i]] ){
            flag[s[i]] = true;
            a.push_back(s[i]);
        }
    }
 
    string t = "";
    sort(a.begin(), a.end());
    for (int i=0;i<a.size()-1;i++){
        next[a[i]] = a[i+1];
    }
    next[a[a.size()-1]] = '.';
    for (int i=0;i<min(n,k);i++){
        t+=s[i];
    }
 
    if ( n < k ){
        for (int i=n;i<k;i++) t+=a[0];
        cout<<t<<endl;
        return 0;
    }
 
    for (int i=min(n,k)-1;i>=0;i--){
        char sad = t[i];
        char ne = next[sad];
        if ( ne == '.' ){
            t[i] = a[0];
        }
        else{
            t[i] = ne;
            break;
        }
    }
 
    cout<<t<<endl;
    return 0;
}
