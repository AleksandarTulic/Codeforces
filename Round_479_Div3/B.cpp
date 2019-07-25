#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    string s;
    cin>>s;
 
    if ( n == 1 ) return 0;
 
    map <string, int> m;
    vector <string> g;
    for (int i=0;i<s.size()-1;i++)
    {
        string t = "";
        t+=s[i];
        t+=s[i+1];
        if ( !m[t] )
        {
            g.push_back(t);
            m[t] = 1;
        }
    }
 
    for (int i=0;i<g.size();i++)
    {
        for (int j=0;j<s.size()-1;j++)
        {
            if ( s[j] == g[i][0] && s[j+1] == g[i][1] ) m[g[i]]++;
        }
    }
 
    int maks = -2e9;
    string buff = "";
    for (int i=0;i<g.size();i++)
        if ( m[g[i]]-1 > maks )
        {
            maks = m[g[i]]-1;
            buff = g[i];
        }
 
    cout<<buff<<endl;
    return 0;
}
