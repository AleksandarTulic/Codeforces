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
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    map <int, bool> flag;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
 
    if ( n <= 2 ){
        cout<<n<<endl;
        return 0;
    }
 
    sort(a, a+n);
 
    int broj = 1;
    flag[0] = true;
    if ( a[0] != 1 ){
        a[0]--;
    }
 
    flag[a[0]] = true;
 
    for (int i=1;i<n;i++){
        if ( !flag[a[i]-1] && a[i]-1 >= 1 ){
            flag[--a[i]] = true;
            broj++;
        }
        else if ( !flag[a[i]] ){
            flag[a[i]] = true;
            broj++;
        }
        else if ( !flag[a[i]+1] ){
            flag[++a[i]] = true;
            broj++;
        }
    }
 
    cout<<broj<<endl;
    return 0;
}
