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
 
bool dist(int a)
{
    map <int, int> m;
    while (a)
    {
        m[a%10]++;
        a/=10;
    }
 
    for (int i=0;i<=9;i++)
        if ( m[i] >= 2 ) return false;
    return true;
}
 
int main()
{
    int a;
    cin>>a;
 
    a++;
    while (!dist(a))
    {
        a++;
    }
    cout<<a<<endl;
    return 0;
}
