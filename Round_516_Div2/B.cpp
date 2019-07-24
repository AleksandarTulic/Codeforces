#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <queue>
#include <map>
 
using namespace std;
 
int main()
{
    int tests;
    cin>>tests;
 
    while ( tests-- )
    {
        long long a;
        cin>>a;
 
        long long br = 1;
        while ( a != 0 )
        {
            if ( a % 2 == 1 ) br*=2;
            a/=2;
        }
 
        cout<<br<<endl;
    }
    return 0;
}
