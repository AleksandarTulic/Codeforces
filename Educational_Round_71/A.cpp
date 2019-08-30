#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <map>
 
using namespace std;
 
int main()
{
    int tests;
    cin>>tests;
 
    while ( tests-- ){
        int b, p, f;
        cin>>b>>p>>f;
 
        int h,c;
        cin>>h>>c;
 
        int bb = b / 2;
        int profit = 0;
        while ( bb && ( p || f ) ){
            if ( p <= 0 ) profit+=c, f--;
            else if ( f <= 0 ) profit+=h, p--;
            else if ( p>0 && f>0 ){
                if ( h > c ){
                    profit+=h;
                    p--;
                }
                else{
                    profit+=c;
                    f--;
                }
            }
            bb--;
        }
 
        cout<<profit<<endl;
    }
    return 0;
}
