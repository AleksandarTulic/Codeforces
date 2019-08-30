#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
#define ull unsigned long long
using namespace std;
 
int main()
{
    int x;
    cin>>x;
 
    int br = 0;
 
    while ( x ){
        ll p = 1;
        while ( p*2 <= x ){
            p*=2;
        }
 
        x-=p;
        br++;
    }
 
    cout<<br<<endl;
    return 0;
}
