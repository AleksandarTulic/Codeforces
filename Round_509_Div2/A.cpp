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
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    sort(a, a+n);
    int br = 0;
    for (int i=1;i<n;i++) {
            br+= a[i] - a[i-1] - 1;
    }
    cout<<br<<endl;
    return 0;
}
