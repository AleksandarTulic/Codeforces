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
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    map <int, bool> m1;
    for (int i=0;i<n;i++){
        cin>>a[i];
        m1[a[i]] = true;
    }
    int m;
    cin>>m;
    int b[m];
    map <int, bool> m2;
    for (int i=0;i<m;i++){
        cin>>b[i];
        m2[b[i]] = true;
    }
 
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if ( !m1[a[i] + b[j]] && !m2[a[i] + b[j]] ){
                cout<<a[i]<<" "<<b[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
 
