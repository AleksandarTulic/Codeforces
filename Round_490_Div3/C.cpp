#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
 
using namespace std;
 
int n,k;
vector <int> ele(250,0);
vector <char> g;
vector <char> t;
 
int main()
{
    cin>>n>>k;
 
    for (int i=0;i<n;i++)
    {
        char e;
        cin>>e;
        g.push_back(e);
    }
    t=g;
    sort(g.begin(),g.end());
    char a=g[0];
    int br= 1;
 
    for (int i=1;i<n;i++)
        if ( a != g[i] )
        {
            ele[a]=br;
            br = 1;
            a = g[i];
        }
        else br++;
    ele[a]=br;
 
    vector <int> brisi(250,0);
    for (char i = 'a';i<='z';i++)
        if ( k == 0 ) break;
        else if ( ele[i] >= k ) {brisi[i]+=k; break;}
        else if ( ele[i] < k ) { brisi[i]+=ele[i];k-=ele[i]; }
 
    for (int i=0;i<t.size();i++)
    {
        if ( brisi[t[i]]>0 ) brisi[t[i]]--;
        else cout<<t[i];
    }
    return 0;
}
