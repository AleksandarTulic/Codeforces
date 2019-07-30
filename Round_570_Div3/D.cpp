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
 
int main()
{
    int q;
    cin>>q;
 
    while (q--){
        int n;
        cin>>n;
 
        vector <int> br(n+1, 0);
        int a;
        for (int i=0;i<n;i++){
            cin>>a;
            br[a]++;
        }
 
        sort(br.begin(), br.end());
 
        int broj = br[br.size()-1];
        int rez = broj;
 
        for (int i=br.size()-2;i>=0;i--){
            if ( !br[i] || broj-1 < 1 ) break;
 
            rez+=min(br[i], broj-1);
            broj = min(broj-1, br[i]);
        }
 
        cout<<rez<<endl;
    }
    return 0;
}
