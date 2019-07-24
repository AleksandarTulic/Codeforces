#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
 
using namespace std;
 
int main()
{
    string g;
    cin>>g;
 
    int br1 = 0;
    int br2 = 0;
 
    for (int i=0;i<g.size();i++)
        if ( g[i] == 'o' ) br1++;
        else if ( g[i] == '-' ) br2++;
 
    if ( br1 == 0 ) cout<<"YES"<<endl;
    else if ( br2 % br1 == 0 ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
