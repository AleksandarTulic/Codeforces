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
    int n;
    cin>>n;

    int b[n];
    for (int i=0;i<n;i++) cin>>b[i];

    int i;
    sort(b, b + n);
    long long br = 0;
    for (i=0;i<n && b[i]<0;i++){
        br+=abs(b[i])-1;
    }

    if ( i == 0 ){
        for (i=0;i<n;i++){
            if ( b[i] == 0 ) br++;
            else br+=b[i] - 1;
        }
    }
    else{
        if ( i % 2 == 0 ){
            for (;i<n;i++){
                if ( b[i] == 0 ) br++;
                else br+=b[i] - 1;
            }
        }
        else{
            int j;
            int p = -1;
            for (j=i;j<n;j++){
                if ( b[j] > 0 ){
                    br+=b[j] - 1;
                    if ( p == -1 ) p = j;
                }
            }

            bool flag = false;
            for (j=i;j<n;j++){
                if ( b[j] == 0 ){
                    br++;
                    flag = true;
                }
            }

            if ( !flag ){
                br+=2;
            }
        }
    }

    cout<<br<<endl;
    return 0;
}
