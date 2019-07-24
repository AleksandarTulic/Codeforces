#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <map>
 
using namespace std;
 
int main() {
    string g;
    cin>>g;
 
    int q[g.size()] = {};
 
    if ( g[0] == 'Q' ) q[0]++;
 
    for (int i=1;i<g.size();i++)
    {
        if ( g[i] == 'Q' ) q[i]++;
        q[i]+=q[i-1];
    }
 
    int br = 0;
    for (int i=1;i<g.size();i++)
    {
        if ( g[i] == 'A' )
        {
            br+=q[i-1]*(q[g.size()-1]-q[i-1]);
        }
    }
 
    cout<<br<<endl;
    return 0;
}
