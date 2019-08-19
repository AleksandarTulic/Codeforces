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
 
    vector <int> p1;
    vector <int> p2;
    long long sum1 = 0;
    long long sum2 = 0;
 
    int d = 1;
 
    for (int i=1;i<=n;i++){
        if ( i % 2 ){
            p1.push_back(d);
            sum1+=d;
            d++;
            p2.push_back(d);
            sum2+=d;
            d+=2;
        }
        else{
            p1.push_back(d);
            sum1+=d;
            d--;
            p2.push_back(d);
            sum2+=d;
            d+=2;
        }
    }
 
    if ( sum1 == sum2 ) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for (int i=0;i<p1.size();i++) cout<<p1[i]<<" ";
        for (int i=0;i<p2.size();i++) cout<<p2[i]<<" ";
    }
    return 0;
}
