#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <utility>
#include <iomanip>
#include <queue>
using namespace std;
 
#define ull unsigned long long
#define ll long long
 
int main()
{
    double h,l;
    cin>>h>>l;
 
    cout<<setprecision(15)<<fixed<<(l*l - h*h) / (2*h);
    return 0;
}
